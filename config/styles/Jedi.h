// GraflexBlades.h
// Will load blade style files pertaining to the Jedi
// 

 {"EsbGraflex;common", "tracks/vader.wav", 
 StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Blue>,RotateColorsX<Variation,Rgb<0,0,128>>>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<400>>,TrFade<100>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveBlastWaveL<White,Int<300>,Int<100>,Int<300>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,EFFECT_CLASH>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Black>,AlphaL<Black,Scale<IsLessThan<BatteryLevel,Int<11000>>,Int<0>,Int<16384>>>>>
 (), "Luke \n  ESB" },

{ "FlexAwakens;common", "tracks/fates.wav", 
 StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,0,128>>>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<400>>,TrFade<100>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveBlastWaveL<White,Int<300>,Int<100>,Int<300>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,EFFECT_CLASH>,TransitionEffectL<TrConcat<TrInstant,AlphaL<AudioFlicker<Blue,SteelBlue>,Bump<Int<0>,Int<8000>>>,TrFade<600>>,EFFECT_IGNITION>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Black>,AlphaL<Black,Scale<IsLessThan<BatteryLevel,Int<11000>>,Int<0>,Int<16384>>>>>
 (), "Rey \n TFA" },

{"Light;common", "tracks/heroes.wav",
StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,0,128>>>,TransitionEffectL<TrConcat<TrFade<400>,Mix<SwingSpeed<400>,AudioFlickerL<RotateColorsX<Variation,Rgb<90,180,255>>>,White>,TrDelay<30000>,Mix<SwingSpeed<400>,AudioFlickerL<RotateColorsX<Variation,Rgb<90,180,255>>>,White>,TrFade<800>>,EFFECT_FORCE>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<400>>,TrFade<100>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,TransitionLoopL<TrConcat<TrWipeX<Scale<SlowNoise<Int<2500>>,Int<150>,Int<300>>>,StrobeL<RandomPerLEDFlickerL<Rgb<175,175,175>>,Int<50>,Int<125>>,TrDelayX<Scale<SlowNoise<Int<1200>>,Int<300>,Int<80>>>,AlphaL<White,Int<0>>,TrDelay<300>>>,AlphaL<White,SmoothStep<Scale<SlowNoise<Int<2000>>,Int<1000>,Int<4000>>,Int<-4000>>>,MultiTransitionEffectL<TrConcat<TrDelay<300>,RandomPerLEDFlickerL<White>,TrDelay<15000>,RandomPerLEDFlickerL<White>,TrFade<500>>,EFFECT_STAB>, AlphaL<Mix<IsLessThan<BladeAngle<>,Int<26000>>,MultiTransitionEffectL<TrConcat<TrWipeIn<200>,BrownNoiseFlickerL<White,Int<200>>,TrWipeIn<200>>,EFFECT_STAB>,MultiTransitionEffectL<TrConcat<TrWipe<200>,BrownNoiseFlickerL<White,Int<200>>,TrWipe<200>>,EFFECT_STAB>>,Int<32768>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveBlastWaveL<White,Int<300>,Int<100>,Int<300>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,EFFECT_CLASH>,TransitionEffectL<TrConcat<TrInstant,AlphaL<AudioFlicker<Blue,SteelBlue>,Bump<Int<0>,Int<8000>>>,TrFade<600>>,EFFECT_IGNITION>,TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<White>,TrFade<1000>>,EFFECT_RETRACTION>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeSparkTip<White,300>,TrWipeInSparkTip<White,500>,Black>,TransitionEffectL<TrConcat<TrInstant,AlphaL<White,Bump<Int<0>,Int<10000>>>,TrFade<3000>,AlphaL<Orange,Bump<Int<0>,Int<8000>>>,TrFade<3000>,AlphaL<Red,Bump<Int<0>,Int<6000>>>,TrFade<2000>>,EFFECT_RETRACTION>,AlphaL<Black,Scale<IsLessThan<BatteryLevel,Int<11000>>,Int<0>,Int<16384>>>>>
(), "Blue \n  Light"},




