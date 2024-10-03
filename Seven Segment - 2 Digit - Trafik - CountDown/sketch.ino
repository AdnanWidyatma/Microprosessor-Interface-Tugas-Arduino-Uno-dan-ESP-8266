int a = 4;
int b = 5;
int c = 12;
int d = 10;
int e = 11;
int f = 8;
int g = 9;
int dig1 = 6;
int dig2 = 7;
int led1 = 1;
int led2 = 2;
int led3 = 3;
int tombol = 13;
void setup() {
  // put your setup code here, to run once:
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(dig1, OUTPUT);
  pinMode(dig2, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int tombol1;
  tombol1 = digitalRead(tombol);
  if (tombol1 == LOW){
    hijaublik();
  }
  if (tombol1 == HIGH) {
  kuningled();
  clear();
  delay(10);
  merahled();
  delay(100);
}
}
void angka(int z) {
  switch (z) {
    case 0: angka0(); break;
    case 1: angka1(); break;
    case 2: angka2(); break;
    case 3: angka3(); break;
    case 4: angka4(); break;
    case 5: angka5(); break;
    case 6: angka6(); break;
    case 7: angka7(); break;
    case 8: angka8(); break;
    case 9: angka9(); break;
  }}
void count20(){
    digitalWrite(led3, LOW);
  int x,z;
  for ( x = 20; x >= 0; x--) {
    int puluhan = x / 10 ;
    int satuan = x % 10 ;
    digitalWrite(dig1, LOW);
    digitalWrite(dig2, HIGH);
    angka(puluhan);
    delay(50);
    clear();
    digitalWrite(dig1, HIGH);
    digitalWrite(dig2, LOW);
    angka(satuan);
    delay(50);
    clear();
  if (x == 0){
    clear();break;
    }}
}
void count2(){
    digitalWrite(led3, LOW);
  int x,z;
  for ( x = 2; x >= 0; x--) {
    int puluhan = x / 10 ;
    int satuan = x % 10 ;
    digitalWrite(dig1, LOW);
    digitalWrite(dig2, HIGH);
    angka(puluhan);
    delay(50);
    clear();
    digitalWrite(dig1, HIGH);
    digitalWrite(dig2, LOW);
    angka(satuan);
    delay(50);
    clear();
  if (x == 0){
    clear();break;
    }
  }
}
void merahled(){
  clear();
  digitalWrite(led1, HIGH);
  count20();
  digitalWrite(led1, LOW);

}
void kuningled(){
  digitalWrite(led2, HIGH);
  count2();
  digitalWrite(led2, LOW);
  delay(100);
}
void hijaublik(){
  digitalWrite(led3, HIGH);
  delay(100);
  digitalWrite(led3, LOW);
  delay(100);
}
void angka0(){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
  delay(50);
}
void angka1(){
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  delay(50);
  }
  void angka2(){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
  delay(50);
}
void angka3(){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
  delay(50);
}
void angka4(){
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  delay(50);
}
void angka5(){
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  delay(50);
}
void angka6(){
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  delay(50);
}
void angka7(){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  delay(50);
}
void angka8(){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  delay(50);
}
void angka9(){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  delay(50);
}
void clear(){
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  delay(1);
}