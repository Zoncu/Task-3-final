#include <Adafruit_NeoPixel.h>
#include <SdsDustSensor.h>

#define LED_PIN 4
#define NUMPIXELS 8
int rxPin = 16;
int txPin = 17;

Adafruit_NeoPixel pixels(NUMPIXELS, LED_PIN, NEO_GRB + NEO_KHZ800);
SdsDustSensor sds(rxPin, txPin);


void setup() {
  Serial.begin(9600);
  pixels.begin();
  pixels.setBrightness(50);
  sds.begin();
}

void loop() {
  PmResult pm = sds.readPm();
  
  if (pm.isOk()) {
    float pm25 = pm.pm25;
    
    if (pm25 <= 15.0) {
      setLedColor(0, 255, 0);
    } 
    else if (pm25 > 15.0 && pm25 <= 35.0) {
      setLedColor(255, 255, 0);
    } 
    else {
      setLedColor(255, 0, 0);
    }
  }
  
  delay(60000);
}

void setLedColor(int r, int g, int b) {
  for(int i=0; i<NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(r, g, b));
  }
  pixelshow()
}
