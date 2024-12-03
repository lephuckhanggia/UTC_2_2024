void Read_Sensor_Value() 
{
 V_S1 = digitalRead(S1);
 V_S2 = digitalRead(S2);
 V_S3 = digitalRead(S3);
 V_S4 = digitalRead(S4);
 V_S5 = digitalRead(S5);
 delay(10);
}
void Read_Button_Value() 
{
 V_But1 = digitalRead(But1);
 V_But2 = digitalRead(But2);
 V_But3 = digitalRead(But3);
}
void Print_Sensor_Value() 
{
  Serial.print("S1: ");
  Serial.print(V_S1);
  Serial.print("  S2: ");
  Serial.print(V_S2);  
  Serial.print("  S3: ");
  Serial.print(V_S3);
  Serial.print("  S4: ");
  Serial.print(V_S4);
  Serial.print("  S5: ");
  Serial.print(V_S5);
  Serial.print(" Mode: ");
  Serial.print(currentMode);
  Serial.print(" Turning: ");
  Serial.print(Turning);
  Serial.print(" Turning_C: ");
  Serial.println(Turn_check);
}
