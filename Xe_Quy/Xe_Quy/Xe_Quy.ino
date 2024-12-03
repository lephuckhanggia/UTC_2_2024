int cb_trai_3 = 10;
int cb_trai_2 = 11;
int cb_trai_1 = 12;


int cb_phai_1 = A0;
int cb_phai_2 = A1;
int cb_phai_3 = A2;

int PWNA = 3;
int INA2 = 4;
int INA1 = 5;


int PWNB = 9;
int INB2 = 8;
int INB1 = 7;

int Speed = 255;

void setup() {
  Serial.begin(9600);

  pinMode(cb_trai_3,INPUT);
  pinMode(cb_trai_2,INPUT);
  pinMode(cb_trai_1,INPUT);
  pinMode(cb_phai_3,INPUT);
  pinMode(cb_phai_2,INPUT);
  pinMode(cb_phai_1,INPUT);

  pinMode(PWNA,OUTPUT);
  pinMode(PWNB,OUTPUT);
  pinMode(INA2,OUTPUT);
  pinMode(INA1,OUTPUT);
  pinMode(INB2,OUTPUT);
  pinMode(INB1,OUTPUT);

}

void loop() {



  int doc_cb_trai_3 = digitalRead(cb_trai_3);
  int doc_cb_trai_2 = digitalRead(cb_trai_2);
  int doc_cb_trai_1 = digitalRead(cb_trai_1);

  int doc_cb_phai_3 = digitalRead(cb_phai_3);
  int doc_cb_phai_2 = digitalRead(cb_phai_2);
  int doc_cb_phai_1 = digitalRead(cb_phai_1);

  //if (doc_cb_trai_3 == 0 && doc_cb_trai_2 == 0 && doc_cb_trai_1 == 0 && doc_cb_phai_3 == 0 && doc_cb_phai_2 == 0 && doc_cb_phai_1 == 0)
  //{
  di_thang();
  //}
}

void di_thang() {
  analogWrite(PWNA, 100);
  analogWrite(PWNB, 100);
  digitalWrite(INA1, HIGH);
  digitalWrite(INA2, LOW);
  digitalWrite(INB1, HIGH);
  digitalWrite(INB2, LOW);
}

void dung_yen() {
  analogWrite(PWNA, 0);
  analogWrite(PWNB, 0);
  digitalWrite(INA1, 0);
  digitalWrite(INA2, 0);
  digitalWrite(INB1, 0);
  digitalWrite(INB2, 0);
}

void chinh_lech_phai_1() {
  analogWrite(PWNA, 0);
  analogWrite(PWNB, Speed);
  digitalWrite(INA1, 0);
  digitalWrite(INA2, 0);
  digitalWrite(INB1, 0);
  digitalWrite(INB2, 0);
}
