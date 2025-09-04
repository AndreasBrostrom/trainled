#include <Adafruit_NeoPixel.h>

#define PIN        12      // Data pin connected to LED strip
#define NUM_LEDS   10      // Number of LEDs in your strip

Adafruit_NeoPixel strip(NUM_LEDS, PIN, NEO_GRBW + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
  delay(100);
  pinMode(13, OUTPUT);
}

void loop() {
  for(int i=0; i<NUM_LEDS; i++) {
    strip.setPixelColor(i, strip.Color(255, 255, 255, 255));
  } 
  strip.show();
  delay(5000);
  // White
  /*for(int i=0; i<NUM_LEDS; i++) {
    strip.setPixelColor(i, strip.Color(0, 0, 0, 255)); // Only white channel
  }
  strip.show();
  delay(3000);

  // Debug: HIGH then LOW on onboard LED
  digitalWrite(13, HIGH);
  delay(200);
  digitalWrite(13, LOW);
  delay(200);

  // Warm White (simulate by mixing white and amber)
  for(int i=0; i<NUM_LEDS; i++) {
    strip.setPixelColor(i, strip.Color(0, 0, 128, 128)); // Mix amber and white
  }
  strip.show();
  delay(3000);

  // Debug: HIGH then LOW on onboard LED
  digitalWrite(13, HIGH);
  delay(200);
  digitalWrite(13, LOW);
  delay(200);

  // Amber
  for(int i=0; i<NUM_LEDS; i++) {
    strip.setPixelColor(i, strip.Color(0, 0, 255, 0)); // Only amber channel
  }
  strip.show();
  delay(3000);

  // Debug: HIGH then LOW on onboard LED
  digitalWrite(13, HIGH);
  delay(200);
  digitalWrite(13, LOW);
  delay(200);*/
}