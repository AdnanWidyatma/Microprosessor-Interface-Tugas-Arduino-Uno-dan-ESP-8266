void setup() {
  // put your setup code here, to run once:
  pinMode(1 , OUTPUT);
  pinMode(2 , OUTPUT);
  pinMode(3 , OUTPUT);
  pinMode(4 , INPUT);
}
int tombol;
void loop() {
  // put your main code here, to run repeatedly:
  tombol =  digitalRead(4);
  if (tombol == HIGH){
  digitalWrite(3, HIGH);
  delay(300);
  digitalWrite(3, LOW);
  delay(300);
  digitalWrite(2, HIGH);
  delay(300);
  digitalWrite(2, LOW);
  delay(300);
  digitalWrite(1, HIGH);
  delay(300);
  digitalWrite(1, LOW); 
  delay(300);
  } else {
    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
  }
}