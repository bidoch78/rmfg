// #include <Arduino.h>
// #include <DS3231_Simple.h>

// // const float V_REF = 5.0;
// // const float R_BITS = 12.0;   // ADC resolution (bits)
// // const float ADC_STEPS = (1 << int(R_BITS)) - 1;

// #define PIN_POTAR A0

// void setup() {

//   Serial.begin(9600);
//   // pinMode(PIN_POTAR, INPUT);

//   Wire.begin(); 
//   Serial.println("\nI2C Scanner");

// }

// void loop() {

//   // int value = analogRead(PIN_POTAR);

//   // /* The function returns the analog reading on the pin. 
//   // lthough it is limited to the resolution of 
//   //   the analog to digital converter (0-1023 for 10 bits, 
//   //   0-4095 for 12 bits, etc). Data type: int. */

//   // float voltage = value / ADC_STEPS * V_REF;

//   // //Serial.println(printf("analog value: %1i, voltage value: %2d", value, voltage));

//   // String debug;

//   // char strVal[10];
//   // char strVoltage[10];

//   // snprintf(strVal, sizeof(strVal), "%i", value);
//   // snprintf(strVoltage, sizeof(strVoltage), "%f", voltage);

//   // debug = "Analog value: "; 
//   // debug += strVal;
//   // debug += ", voltage value ";
//   // debug += strVoltage;
  
//   // Serial.println(debug);
//   // delay(500);



//   // byte error, address;
//   // int nDevices;
 
//   // Serial.print("Scanning");
 
//   // nDevices = 0;
//   // for(address = 1; address < 127; address++ )
//   // {
//   //   Wire.beginTransmission(address);
//   //   error = Wire.endTransmission();
//   //   // La valeur de retour de Wire.endTransmission() 
//   //   // est false (0) si le peripherique existe a cette adresse
//   //   Serial.print(".");
 
//   //   if (error == 0)
//   //   {
//   //     Serial.println("");        // retour à la ligne
//   //     Serial.print("I2C device found at address 0x");
//   //     if (address<16)
//   //       Serial.print("0");
//   //     Serial.print(address,HEX);
//   //     Serial.println("  !"); 
//   //     nDevices++;
//   //     break;     // commenter cette ligne si vous recherchez plusieurs péripheriques I2C
//   //                    // sur le bus, sinon le test s'arrête dès le premier trouvé
//   //   }
//   //   else if (error==4)
//   //   {
//   //     Serial.println(""); 
//   //     Serial.print("Unknow error at address 0x");
//   //     if (address<16)
//   //       Serial.print("0");
//   //     Serial.println(address,HEX);
//   //   }  
//   //   delay(50);
//   // }
//   // if (nDevices == 0)
//   // {
//   //   Serial.println(""); 
//   //   Serial.println("No I2C devices found\n");
//   // }
//   // else
//   //   Serial.println("done\n");
 
//   // delay(3000);           // on attend 3 secondes et on recommence

// }

