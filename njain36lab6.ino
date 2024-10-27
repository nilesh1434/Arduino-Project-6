// Nilesh Jain - 653929943
// Lab 6 - Serial Communication
// This code is supposed to turn on/off 2 LED lights with 2 different Buttons (2 commands in 1 board).
// I also have another way where I use Serial Monitor to type in inputs (0, 2 to turn off LED 1 and LED 2
// respectively and 1, 3 to turn on LED 1 and LED 2 respectively)
// Youtube link - 

#include <SoftwareSerial.h>

SoftwareSerial mySerial(11, 9);

// all 2 buttons
int Button1 = 2;
int Button2 = 3;

// checks if Buttons are pressed or not
int read1 = 0;
int read2 = 0;

// all 2 LEDs
int LED1 = 12;
int LED2 = 13;

// checks if LED is on or off
bool ledOn1 = false;
bool ledOn2 = false;

//int ButtonValue = 0;
int index  = 0;

char rd;

void setup() {
  // inputs
  pinMode(Button1, INPUT_PULLUP);
  pinMode(Button2, INPUT_PULLUP);

  // outputs
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  Serial.begin(9600);
//  mySerial.begin(9600);
//  while (!mySerial) {
//    ;
//  }
}

void loop() {
  // checks for buttons pressed
  read1 = digitalRead(Button1);
  read2 = digitalRead(Button2);
  
  // LEDs are off
  ledOn1 = false;
  ledOn2 = false;

  // Use buttons to control LEDs
  if (read1 == HIGH) {
    digitalWrite(LED1, LOW);
  }
  else{
    digitalWrite(LED1, HIGH);
  }

  if (read2 == HIGH) {
    digitalWrite(LED2, LOW);
  }
  else{
    digitalWrite(LED2, HIGH);
  }

  // Use Serial Monitor to type in inputs (0, 2 to turn off LED 1 and LED 2 respectively and 1, 3 to turn on LED 1 and LED 2 respectively)
  // recieve input
//  while (Serial.available() == 0);

  // read input
//  int ButtonValue = Serial.read() - '0';
//
//  if (ButtonValue == 1) {
//    Serial.println("LED1 is on");
//    digitalWrite(LED1, HIGH);
//  }
//  else if (ButtonValue == 0) {
//    Serial.println("LED1 is off");
//    digitalWrite(LED1, LOW);
//  }
//  else if (ButtonValue == 3) {
//    Serial.println("LED2 is on");
//    digitalWrite(LED2, HIGH);
//  }
//  else if (ButtonValue == 2) {
//    Serial.println("LED2 is off");
//    digitalWrite(LED2, LOW);
//  }
//  else {
//    Serial.println("Invalid");
//  }
//  Serial.flush();
}
