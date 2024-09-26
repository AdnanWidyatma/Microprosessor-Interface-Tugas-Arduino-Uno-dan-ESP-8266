int merah1 = 2;
int kuning1 = 1;
int hijau1 = 0;
int merah2 = 5;
int kuning2 = 4;
int hijau2 = 3;
int merah3 = 8;
int kuning3 = 7;
int hijau3 = 6;

void setup() {
  // put your setup code here, to run once:
  pinMode(merah1, OUTPUT);
  pinMode(kuning1, OUTPUT);
  pinMode(hijau1, OUTPUT);
  pinMode(merah2, OUTPUT);
  pinMode(hijau2, OUTPUT);
  pinMode(kuning2, OUTPUT);
  pinMode(merah3, OUTPUT);
  pinMode(kuning3, OUTPUT);
  pinMode(hijau3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(hijau1, HIGH);
  digitalWrite(merah2, HIGH);
  digitalWrite(merah3, HIGH);
  delay(3000);

  digitalWrite(hijau1, LOW);
  digitalWrite(kuning1, HIGH);
  digitalWrite(merah2, LOW);
  digitalWrite(kuning2, HIGH);
  delay(3000);

  digitalWrite(kuning1, LOW);
  digitalWrite(kuning2, LOW);
  digitalWrite(merah1, HIGH);
  digitalWrite(hijau2, HIGH);
  delay(3000);

  digitalWrite(hijau2, LOW);
  digitalWrite(kuning2, HIGH);
  digitalWrite(merah3, LOW);
  digitalWrite(kuning3, HIGH);
  delay(3000);

  digitalWrite(kuning2, LOW);
  digitalWrite(kuning3, LOW);
  digitalWrite(merah2, HIGH);
  digitalWrite(hijau3, HIGH);
  delay(3000);

  digitalWrite(hijau3, LOW);
  digitalWrite(kuning3, HIGH);
  digitalWrite(merah1, LOW);
  digitalWrite(kuning1, HIGH);
  delay(3000);

  digitalWrite(kuning3, LOW);
  digitalWrite(kuning1, LOW);
  digitalWrite(merah3, HIGH);
  digitalWrite(hijau1, HIGH);
  delay(3000);

}
