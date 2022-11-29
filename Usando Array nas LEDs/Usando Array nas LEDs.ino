int pinLed []= {2,4};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for(int i = 0; i <= 1; i++){
    pinMode(pinLed[i], OUTPUT);
  }
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(pinLed[0]) == 0) {
    
  digitalWrite(pinLed[1], HIGH);
  digitalWrite(pinLed[0], HIGH);
  delay(300);
  
  } else {
    
  digitalWrite(pinLed[1], LOW);
  digitalWrite(pinLed[0], LOW);
  delay(300);      
  }
}
