int variableOne = 2;
int variableTwo = 4;
int variableThree = 6;

void setup() {
  // put your setup code here, to run once:  
  pinMode(variableOne, OUTPUT);
  pinMode(variableTwo, OUTPUT);
  pinMode(variableThree, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(variableOne, HIGH);
  digitalWrite(variableTwo, LOW);
  digitalWrite(variableThree, LOW);
  delay(500);
  digitalWrite(variableOne, HIGH);
  digitalWrite(variableTwo, HIGH);
  digitalWrite(variableThree, LOW);
  delay(500);
  digitalWrite(variableOne, HIGH);
  digitalWrite(variableTwo, HIGH);
  digitalWrite(variableThree, HIGH);
  delay(500);
  digitalWrite(variableOne, LOW);
  digitalWrite(variableTwo, LOW);
  digitalWrite(variableThree, LOW);
  delay(1000);
}