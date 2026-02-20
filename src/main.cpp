// IMPORTANT: LCDWIKI_SPI LIBRARY MUST BE SPECIFICALLY
// CONFIGURED FOR EITHER THE TFT SHIELD OR THE BREAKOUT BOARD.

//This program is a demo of how to display picture and 
//how to use rotate function to display string.

//when using the BREAKOUT BOARD only and using these hardware spi lines to the LCD,
//the SDA pin and SCK pin is defined by the system and can't be modified.
//if you don't need to control the LED pin,you can set it to 3.3V and set the pin definition to -1.
//other pins can be defined by youself,for example
//pin usage as follow:
//                   CS  DC/RS  RESET  SDI/MOSI  SCK  SDO/MISO  LED    VCC     GND    
//ESP32-WROOM-32E:   15    2      27      13     14      12     21      5V     GND  

//Remember to set the pins to suit your display module!

/***********************************************************************************
* @attention
*
* THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
* WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
* TIME. AS A RESULT, QD electronic SHALL NOT BE HELD LIABLE FOR ANY
* DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
* FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE 
* CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
**********************************************************************************/
#include <Arduino.h>
// #include <TFT_eSPI.h> 
// #include <SPI.h>

// TFT_eSPI mylcd = TFT_eSPI(); 

// //define some colour values
// #define  BLACK   0x0000
// #define BLUE    0x001F
// #define RED     0xF800
// #define GREEN   0x07E0
// #define CYAN    0x07FF
// #define MAGENTA 0xF81F
// #define YELLOW  0xFFE0
// #define WHITE   0xFFFF

// //clear screen
// void fill_screen_test()
// {
//   mylcd.fillScreen(BLACK);delay(500);  
//   mylcd.fillScreen(RED);delay(500); 
//   mylcd.fillScreen(GREEN);delay(500); 
//   mylcd.fillScreen(BLUE);delay(500); 
//   mylcd.fillScreen(BLACK);delay(500); 
// }



void setup() 
{
  
// mylcd.init();
}

void loop() 
{
  // mylcd.setRotation(0);
  // fill_screen_test();
 
}
