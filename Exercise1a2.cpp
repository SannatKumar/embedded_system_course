/*Begining of Auto generated code by Atmel studio */
#include <Arduino.h>

/*End of auto generated code by Atmel studio */
void blinkT();
void blinkSpace();
void blinkU();
void blinkA();
void blinkS();
void blinkBreaks();

//Beginning of Auto generated function prototypes by Atmel Studio
//End of Auto generated function prototypes by Atmel Studio

void setup() {
   pinMode(LED_BUILTIN, OUTPUT);// the loop function runs over and over again forever
}
void loop() {
	blinkT();
	blinkSpace();
	blinkU();
	blinkSpace();
	blinkA();
	blinkSpace();
	blinkS();
	blinkBreaks();
}
void blinkT() {
	digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on
	delay(300);
}

void blinkSpace(){
	digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
	delay(300);
}


void blinkU(){                   // wait for a second
	digitalWrite(LED_BUILTIN, HIGH);
	delay(100);
	digitalWrite(LED_BUILTIN, LOW);
	delay(100);
	digitalWrite(LED_BUILTIN, HIGH);
	delay(100);
	digitalWrite(LED_BUILTIN, LOW);
	delay(100);
	digitalWrite(LED_BUILTIN, HIGH);
	delay(300);
}
void blinkA(){
	digitalWrite(LED_BUILTIN, HIGH);
	delay(100);
	digitalWrite(LED_BUILTIN, LOW);
	delay(100);
	digitalWrite(LED_BUILTIN, HIGH);
	delay(300);
}
void blinkS(){
	digitalWrite(LED_BUILTIN, HIGH);
	delay(100);
	digitalWrite(LED_BUILTIN, LOW);
	delay(100);
	digitalWrite(LED_BUILTIN, HIGH);
	delay(100);
	digitalWrite(LED_BUILTIN, LOW);
	delay(100);
	digitalWrite(LED_BUILTIN, HIGH);
	delay(100);
}
void blinkBreaks(){
	digitalWrite(LED_BUILTIN, LOW);
	delay(700);
}
