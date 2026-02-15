#include <Arduino.h>

const float V_REF = 5.0;
const float R_BITS = 12.0;   // ADC resolution (bits)
const float ADC_STEPS = (1 << int(R_BITS)) - 1;

#define PIN_POTAR A0

void setup() {

  Serial.begin(9600);
  pinMode(PIN_POTAR, INPUT);

}

void loop() {

  int value = analogRead(PIN_POTAR);

  /* The function returns the analog reading on the pin. 
  lthough it is limited to the resolution of 
    the analog to digital converter (0-1023 for 10 bits, 
    0-4095 for 12 bits, etc). Data type: int. */

  float voltage = value / ADC_STEPS * V_REF;

  //Serial.println(printf("analog value: %1i, voltage value: %2d", value, voltage));

  String debug;

  char strVal[10];
  char strVoltage[10];

  snprintf(strVal, sizeof(strVal), "%i", value);
  snprintf(strVoltage, sizeof(strVoltage), "%f", voltage);

  debug = "Analog value: "; 
  debug += strVal;
  debug += ", voltage value ";
  debug += strVoltage;
  
  Serial.println(debug);
  delay(500);


}

