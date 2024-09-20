void setup() {
  // put your setup code here, to run once:
  pinMode(1 , OUTPUT);
  pinMode(2 , OUTPUT);
  pinMode(3 , OUTPUT);
  pinMode(4 , INPUT);
  pinMode(5 , INPUT);
}
int tombol1;
int tombol2;
int tombol3;
void loop() {
  // put your main code here, to run repeatedly:
  tombol1 = digitalRead(4);
  tombol2 = digitalRead(5);
  tombol3 = digitalRead(6);
  if (tombol1 == HIGH){
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
  if (tombol2 == HIGH){
  digitalWrite(1, HIGH);
  delay(300);
  digitalWrite(1, LOW);
  delay(300);
  digitalWrite(2, HIGH);
  delay(300);
  digitalWrite(2, LOW);
  delay(300);
  digitalWrite(3, HIGH);
  delay(300);
  digitalWrite(3, LOW); 
  delay(300);
  } else {
    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
  }
   if (tombol3 == HIGH){
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
  digitalWrite(1, HIGH);
  delay(300);
  digitalWrite(1, LOW);
  delay(300);
  digitalWrite(2, HIGH);
  delay(300);
  digitalWrite(2, LOW);
  delay(300);
  digitalWrite(3, HIGH);
  delay(300);
  digitalWrite(3, LOW); 
  delay(300);
  } else {
    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
  }
}