//--------------------------------------------------------------------------------
// WIFI configuration
//--------------------------------------------------------------------------------
// AP mode name and password
const char* WiFiAPName = "LightControlAP";
const char* WiFiAPPSK = "ComptoirStCyr2019";

// IP configuration for AP
IPAddress WiFiIp(192, 168, 10, 1);
IPAddress WiFiNMask(255, 255, 255, 0);

// Wi-Fi network to connect to (if not in AP mode)
char* ssid = "ssid";
char* password = "xxxxxx";

const bool apMode = true; // Whether if ESP8266 should connect to an existing WIFI or mount its own AP

//--------------------------------------------------------------------------------
// LEDs Strip configuration
//--------------------------------------------------------------------------------
#define LED_TYPE      WS2812
#define COLOR_ORDER   GRB

// Define the number of strips
#define NUM_STRIPS    4
#define MAX_LEDS_PER_STRIP 300
// please add one number of leds per strip needed
const int num_leds_list[4] =  { 85, 98, 168, 300 };

// specific correction for each strip, if needed
/* Color corrections from FastLED : 
    TypicalSMD5050 =0xFFB0F0,
    TypicalLEDStrip =0xFFB0F0,
    Typical8mmPixel =0xFFE08C,
    TypicalPixelString =0xFFE08C,
    UncorrectedColor =0xFFFFFF 
 */
const CRGB light_correction_list[NUM_STRIPS] = { TypicalLEDStrip, TypicalLEDStrip, TypicalLEDStrip, TypicalLEDStrip };

 // Specific temperature corrections from FastLED : 
 /*
Candle =0xFF9329,
Tungsten40W =0xFFC58F,
Tungsten100W =0xFFD6AA,
Halogen =0xFFF1E0,
CarbonArc =0xFFFAF4,
HighNoonSun =0xFFFFFB,
DirectSunlight =0xFFFFFF,
OvercastSky =0xC9E2FF,
ClearBlueSky =0x409CFF,
WarmFluorescent =0xFFF4E5,
StandardFluorescent =0xF4FFFA,
CoolWhiteFluorescent =0xD4EBFF,
FullSpectrumFluorescent =0xFFF4F2,
GrowLightFluorescent =0xFFEFF7,
BlackLightFluorescent =0xA700FF,
MercuryVapor =0xD8F7FF,
SodiumVapor =0xFFD1B2,
MetalHalide =0xF2FCFF,
HighPressureSodium =0xFFB74C,
UncorrectedTemperature =0xFFFFFF
 */
const CRGB temp_correction_list[NUM_STRIPS] = { UncorrectedTemperature, UncorrectedTemperature, ClearBlueSky, UncorrectedTemperature };

#define MILLI_AMPS         25000 // IMPORTANT: set the max milli-Amps of your power supply (4A = 4000mA)
#define FRAMES_PER_SECOND  120  // here you can control the speed. With the Access Point / Web Server the animations run a bit slower.

//--------------------------------------------------------------------------------
// Specific scenarios configuration
//--------------------------------------------------------------------------------
#define TWINKLE_SPEED_FACTOR 5 // From 1 to 10 for updating twinkles scenarios
#define TWINKLE_FASTCYCLE_THRESHOLD 1000 // Minimum cycle number for the fastcycle in twinkles
