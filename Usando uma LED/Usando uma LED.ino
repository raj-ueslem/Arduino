int variableOne = 2;
int variableTwo = 4;


void setup() {
  // put your setup code here, to run once:  
  pinMode(variableOne, OUTPUT);
  pinMode(variableTwo, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(variableTwo, LOW);
  digitalWrite(variableOne, HIGH);
  delay(500);
  digitalWrite(variableOne, LOW);
  digitalWrite(variableTwo, HIGH);
  delay(500);
  digitalWrite(variableOne, HIGH);
  digitalWrite(variableTwo, HIGH);
  delay(500);
}