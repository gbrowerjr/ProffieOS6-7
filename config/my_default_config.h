// This is a sample configuration file.
// This saber has:
//   o Proffieboard hardware.
//   o Two buttons
//   o A neopixel blade on LED 1-2-3 and neopixel data 1.

#ifdef CONFIG_TOP
#include "proffieboard_v2_config.h"
//#include "proffieboard_config.h"
#define NUM_BLADES 1
#define NUM_BUTTONS 2
#define VOLUME 1500 // rear facing SE speaker-1500, forward facing SE speaker-1300
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 3.0 // rear facing speaker-2.0, forward facing speaker-3.0
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811 // 
#define ENABLE_SD
#define ENABLE_SERIAL
#define KEEP_SAVEFILES_WHEN_PROGRAMMING
#define SAVE_STATE // saves preset, vol and color change
// #define SAVE_PRESET
// #define SAVE_VOLUME
// #define SAVE_COLOR_CHANGE
// #define DISABLE_COLOR_CHANGE 
#define IDLE_OFF_TIME 16000 // time before deep sleep 
// #include "bluetooth.h"
// #define ENABLE_SSD1306 // 
#define SHARED_POWER_PINS
#define ENABLE_POWER_FOR_ID PowerPINS<bladePowerPin1, bladePowerPin2, bladePowerPin3>
#define DISABLE_DIAGNOSTIC_COMMANDS // Save MCU flash space if overflowing during upload
#define COLOR_CHANGE_DIRECT // each click changes colors on twist

#include "../props/fett263_defines.h"

#endif

#ifdef CONFIG_PROP
// #include "../props/saber_sa22c_buttons.h"
#include "../props/saber_fett263_buttons.h"
// #include "../props/saber_shtok_buttons.h"
#endif

#ifdef CONFIG_PRESETS

Preset presets[] = {
#include "styles/standard_style.h" // single blade styles
// #include "styles/HeroBlades.h" // Blade + 2 controllable accent styles
};

BladeConfig blades[] = {
#include "single_blade.h" // standard single blade sabers
// #include "dual_blade.h" // blade + 1 controllable accent
// #include "triple_blade.h // blade + 2 controllable accent
// #include "crossguard.h" // blade + 2 sub blades
};

#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
