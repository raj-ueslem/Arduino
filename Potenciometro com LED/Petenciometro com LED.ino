const int pinPotetiometerner = A0;
const int led = 3;



void setup() {
  // put your setup code here, to run once:  
  
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int readValue = analogRead(pinPotetiometerner);
  Serial.println(readValue);
  int newValue = map(readValue, 0, 1023, 0, 255);
  analogWrite(led, newValue);  
}