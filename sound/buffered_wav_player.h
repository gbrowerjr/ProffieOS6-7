#ifndef SOUND_BUFFERED_WAV_PLAYER_H
#define SOUND_BUFFERED_WAV_PLAYER_H

#include "playwav.h"
#include "volume_overlay.h"

class BufferedWavPlayer;
size_t WhatUnit(class BufferedWavPlayer* player);

#ifndef AUDIO_BUFFER_SIZE_BYTES
#define AUDIO_BUFFER_SIZE_BYTES 512
#endif

// Combines a WavPlayer and a BufferedAudioStream into a
// buffered wav player. When we start a new sample, we
// make sure to fill up the buffer before we start playing it.
// This minimizes latency while making sure to avoid any gaps.
class BufferedWavPlayer : public VolumeOverlay<BufferedAudioStream<AUDIO_BUFFER_SIZE_BYTES> > {
public:
  void Play(const char* filename) {
    MountSDCard();
    EnableAmplifier();
    pause_ = true;
    clear();
    wav.Play(filename);
    SetStream(&wav);
    scheduleFillBuffer();
    pause_ = false;
  }

  bool PlayInCurrentDir(const char* name) {
    STDOUT << "Playing " << name << ", ";
    for (const char* dir = current_directory; dir; dir = next_current_directory(dir)) {
      PathHelper full_name(dir, name);
      LOCK_SD(true);
      bool exists = LSFS::Exists(full_name);
      LOCK_SD(false);
      // Fill up audio buffers before we lock the SD again
      AudioStreamWork::scheduleFillBuffer();
      if (exists) {
	Play(full_name);
	return true;
      }
    }
    STDOUT << "(not found)\n";
    return false;
  }

  void UpdateSaberBaseSoundInfo() {
    SaberBase::sound_length = length();
    SaberBase::sound_number = current_file_id().GetFileNum();
  }

  void PlayOnce(Effect* effect, float start = 0.0) {
    MountSDCard();
    EnableAmplifier();
    set_volume_now(volume_target() * effect->GetVolume() / 100);
    STDOUT << "unit = " << WhatUnit(this) << " vol = " << volume() << ", ";

    pause_ = true;
    clear();
    ResetStopWhenZero();
    wav.PlayOnce(effect, start);
    SetStream(&wav);
    // Fill up the buffer, if possible.
    while (!wav.eof() && space_available()) {
      scheduleFillBuffer();
    }
    pause_ = false;
    if (SaberBase::sound_length == 0.0 && effect->GetFollowing() != effect) {
      UpdateSaberBaseSoundInfo();
    }
  }
  void PlayLoop(Effect* effect) { wav.PlayLoop(effect); }

  void Stop() override {
    pause_ = true;
    wav.Stop();
    wav.Close();
    clear();
  }

  void CloseFiles() override { wav.Close(); }

  const char* Filename() const {
    return wav.Filename();
  }

  Effect::FileID current_file_id() const {
    return wav.current_file_id();
  }
  
  bool isPlaying() const {
    return !pause_ && (wav.isPlaying() || buffered());
  }

  BufferedWavPlayer() {
    SetStream(&wav);
  }

  // This makes a paused player report very little available space, which
  // means that it will be low priority for reading.
  size_t space_available() const override {
    size_t ret = VolumeOverlay<BufferedAudioStream<AUDIO_BUFFER_SIZE_BYTES>>::space_available();
    if (pause_ && ret) ret = 2; // still slightly higher than FromFileStyle<>
    return ret;
  }

  int read(int16_t* dest, int to_read) override {
    if (pause_) return 0;
    return VolumeOverlay<BufferedAudioStream<AUDIO_BUFFER_SIZE_BYTES> >::read(dest, to_read);
  }
  bool eof() const override {
    if (pause_) return true;
    return VolumeOverlay<BufferedAudioStream<AUDIO_BUFFER_SIZE_BYTES> >::eof();
  }

  float length() const { return wav.length(); }
  float pos() const {
    return wav.pos() - buffered() * (1.0f / AUDIO_RATE);
  }
  const char* filename() const {
    return wav.filename();
  }

  void AddRef() { refs_++; }
  void SubRef() { refs_--; }
  bool Available() const { return refs_ == 0 && !isPlaying(); }
  uint32_t refs() const { return refs_; }

  void dump() {
    STDOUT << " pause=" << pause_
	   << " buffered=" << buffered()
	   << " wav.isPlaying()=" << wav.isPlaying()
	   << "\n";
    wav.dump();
  }
private:
  uint32_t refs_ = 0;

  PlayWav wav;
  volatile bool pause_;
};

#endif
