#include "Ultrasonic.h"
const int pinEcho = 7 ;
const int pinTrigger = 6;

const int redLed = 5;
const int yellowLed = 4;
const int yellowLedRight = 3;
const int greenLed = 2;

Ultrasonic ultrasonic(pinTrigger, pinEcho);

int distance;
double response;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinEcho, INPUT);
  pinMode(pinTrigger, OUTPUT);
  Serial.begin(9600);
  pinMode(redLed,OUTPUT);
  pinMode(yellowLed,OUTPUT);
  pinMode(yellowLedRight,OUTPUT);
  pinMode(greenLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  hcsr04();
  Serial.print("Distancia: ");
  Serial.print(response);
  Serial.println("cm");

  if(response <= 10) {
    digitalWrite(redLed, HIGH);
    delay(200);
    digitalWrite(redLed, LOW);    
  }else if(response > 10 && response <= 20) {
    digitalWrite(yellowLed, HIGH);
    delay(200);
    digitalWrite(yellowLed, LOW);        
  }else if(response > 20 && response <=30) {
    digitalWrite(yellowLedRight, HIGH);
    delay(200);
    digitalWrite(yellowLedRight, LOW);   
  }else if(response > 30 && response <= 50) {
    digitalWrite(greenLed, HIGH);
    delay(200);
    digitalWrite(greenLed, LOW);
  }

}
void hcsr04() {
  
  digitalWrite(pinTrigger, LOW);
  delayMicroseconds(2);
  digitalWrite(pinTrigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinTrigger, LOW);

  distance = (ultrasonic.Ranging(CM));
  response = double(distance);
  delay(300);
}
