void Run_Straight() 
{
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
  digitalWrite(In3, HIGH);
  digitalWrite(In4, LOW);
  analogWrite(EnA, SpeedA);
  analogWrite(EnB, SpeedB);
}
void Run_Straight_Turn() 
{
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
  digitalWrite(In3, HIGH);
  digitalWrite(In4, LOW);
  analogWrite(EnA, 60);
  analogWrite(EnB, 50);
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
  analogWrite(EnB, SpeedB);
}
void TwoWD_Turn_Left()
{
  digitalWrite(In1, LOW);
  digitalWrite(In2, HIGH);
  digitalWrite(In3, HIGH);
  digitalWrite(In4, LOW);
  analogWrite(EnA, 80 );
  analogWrite(EnB, 60  );
}
void Slight_Turn_Left_1()
{
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
  digitalWrite(In3, HIGH);
  digitalWrite(In4, LOW);
  analogWrite(EnA, SpeedMinA_1);
  analogWrite(EnB, SpeedB);
}
void Slight_Turn_Left_2()
{
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
  digitalWrite(In3, HIGH);
  digitalWrite(In4, LOW);
  analogWrite(EnA, SpeedMinA_2);
  analogWrite(EnB, SpeedB);
}
void OneWD_Turn_Right()
{
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
  digitalWrite(In3, LOW);
  digitalWrite(In4, LOW);
  analogWrite(EnA, SpeedA);
  analogWrite(EnB, 0);
}
void TwoWD_Turn_Right()
{
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
  digitalWrite(In3, LOW);
  digitalWrite(In4, HIGH);
  analogWrite(EnA, 65 );
  analogWrite(EnB, 80 );
}
void Slight_Turn_Right_1()
{
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
  digitalWrite(In3, HIGH);
  digitalWrite(In4, LOW);
  analogWrite(EnA, SpeedA);
  analogWrite(EnB, SpeedMinB_1);
}
void Slight_Turn_Right_2()
{
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
  digitalWrite(In3, HIGH);
  digitalWrite(In4, LOW);
  analogWrite(EnA, SpeedA);
  analogWrite(EnB, SpeedMinB_2);
}
