/*********************************************************************
This is an example for our Monochrome OLEDs based on SSD1306 drivers

  Pick one up today in the adafruit shop!
  ------> http://www.adafruit.com/category/63_98

This example is for a 128x64 size display using SPI to communicate
4 or 5 pins are required to interface

Adafruit invests time and resources providing this open source code, 
please support Adafruit and open-source hardware by purchasing 
products from Adafruit!

Written by Limor Fried/Ladyada  for Adafruit Industries.  
BSD license, check license.txt for more information
All text above, and the splash screen must be included in any redistribution
*********************************************************************/

#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// If using software SPI (the default case):
#define OLED_MOSI   9
#define OLED_CLK   10
#define OLED_DC    11
#define OLED_CS    12
#define OLED_RESET 13
Adafruit_SSD1306 display(OLED_MOSI, OLED_CLK, OLED_DC, OLED_RESET, OLED_CS);


#if (SSD1306_LCDHEIGHT != 64)
#error("Height incorrect, please fix Adafruit_SSD1306.h!");
#endif

void setup()   {                
  Serial.begin(9600);

  // by default, we'll generate the high voltage from the 3.3v line internally! (neat!)
  display.begin(SSD1306_SWITCHCAPVCC);
  // init done
 display.clearDisplay();
 display.setTextColor(WHITE);
 display.setTextSize(2);
 display.setCursor(20,0);
 display.print("WELCOME");
/*
  display.setTextSize(2);
 display.setCursor(30,20);
 display.print("Toky");
 display.display();

   display.setTextSize(2);
 display.setCursor(5,40);
 display.print("Community");
 display.display();
*/

  display.setTextSize(2);
 display.setCursor(30,20);
 display.print("Robot");
 display.display();

   display.setTextSize(2);
 display.setCursor(5,40);
 display.print("Adventure");
 display.display();
 
}


void loop() {
  
}

