/////////////
/* INCLUDES:*/

#include <Wire.h>                   // Library for I2C communication
#include <LiquidCrystal_I2C.h>      // Library for LCD, https://github.com/johnrickman/LiquidCrystal_I2C

// Wiring: SDA pin is connected to A4 and SCL pin to A5. Connect to LCD via I2C, default address 0x27 (A0-A2 not jumpered)


///////////////
/* VARIABLES:*/
LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 16, 2); // Change to (0x27,16,2) for 16x2 LCD.

String  car=""; 	// Initialistion variable to NULL. 

///////////////
/* Void */
void setup() {


  // put your setup code here, to run once:
Serial.begin(9600);  	// Initialisation du port serie.
delay(2000);

Serial.println("Serial port Opened:");

}

////////////////
/* Loop */
void loop() {
  // put your main code here, to run repeatedly:
    if(Serial.available()){
        input = Serial.read();
        Serial.print("You typed: " );
        Serial.println(input);
    }
}
