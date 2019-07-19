int ir_in=12;
int w_out=7;
int y_out=8;

void setup() {
  pinMode (12, INPUT);
  pinMode (7, OUTPUT);
  pinMode (8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);

  if(digitalRead(12)==HIGH)
  {
    digitalWrite(8,HIGH);
  }
}
