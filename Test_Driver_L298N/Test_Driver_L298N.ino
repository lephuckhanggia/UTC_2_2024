//Speed
int SpeedMax = 60;  //perfect 60
int SpeedMin = 40;  //40
int SpeedLech = 20; //20
int SpeedLui = 30;  //30

//A-Trai B-Phai
int Speed_A = SpeedMax ;
int Speed_B = SpeedMax + SpeedLech;
int SpeedMinA = SpeedMin;
int SpeedMinB = SpeedMin + SpeedLech;
//L298n driver
#define EnA 6
#define In1 5
#define In2 7
#define In3 2
#define In4 4
#define EnB 3
void setup() {
  // put your setup code here, to run once:
  pinMode(EnA, OUTPUT);
  pinMode(In1, OUTPUT);
  pinMode(In2, OUTPUT);
  pinMode(In3, OUTPUT);
  pinMode(In4, OUTPUT);
  pinMode(EnB, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(In1, LOW);
  digitalWrite(In2, LOW);
  digitalWrite(In3, HIGH);
  digitalWrite(In4, LOW);
  analogWrite(EnA, 0);
  analogWrite(EnB, Speed_B);
}
void Run_Straight() 
{
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
  digitalWrite(In3, HIGH);
  digitalWrite(In4, LOW);
  analogWrite(EnA, Speed_A);
  analogWrite(EnB, Speed_B);
}

void Stop()
{
digitalWrite(In1, LOW);
digitalWrite(In2, LOW);
digitalWrite(In3, LOW);
digitalWrite(In4, LOW);
analogWrite(EnA, 0);
analogWrite(EnB, 0);
}

void OneWD_Turn_Left()
{
  digitalWrite(In1, LOW);
  digitalWrite(In2, LOW);
  digitalWrite(In3, HIGH);
  digitalWrite(In4, LOW);
  analogWrite(EnA, 0);
  analogWrite(EnB, Speed_B);
}
void TwoWD_Turn_Left()
{
  digitalWrite(In1, LOW);
  digitalWrite(In2, HIGH);
  digitalWrite(In3, HIGH);
  digitalWrite(In4, LOW);
  analogWrite(EnA, SpeedMax + 20 );
  analogWrite(EnB, SpeedMax  );
}
void Slight_Turn_Left()
{
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
  digitalWrite(In3, HIGH);
  digitalWrite(In4, LOW);
  analogWrite(EnA, SpeedMinA);
  analogWrite(EnB, Speed_B);
}


void OneWD_Turn_Right()
{
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
  digitalWrite(In3, LOW);
  digitalWrite(In4, LOW);
  analogWrite(EnA, Speed_A);
  analogWrite(EnB, 0);
}
void TwoWD_Turn_Right()
{
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
  digitalWrite(In3, LOW);
  digitalWrite(In4, HIGH);
  analogWrite(EnA, SpeedMax - 20 );
  analogWrite(EnB, SpeedMax + SpeedLech );
}
void Slight_Turn_Right()
{
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
  digitalWrite(In3, HIGH);
  digitalWrite(In4, LOW);
  analogWrite(EnA, Speed_A);
  analogWrite(EnB, SpeedMinB);
}
