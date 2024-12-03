void Read_Sensor_Value() 
{
 V_S1 = digitalRead(S1);
 V_S2 = digitalRead(S2);
 V_S3 = digitalRead(S3);
 V_S4 = digitalRead(S4);
 V_S5 = digitalRead(S5);
 V_SB = digitalRead(SB);
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
  Serial.print("  SB: ");
  Serial.print(V_SB);
  Serial.print("    But1: ");
  Serial.print(V_But1);
  Serial.print(" But2: ");
  Serial.print(V_But2);
  Serial.print(" But3: ");
  Serial.print(V_But3);
  Serial.print(" CurrentMode: ");
  Serial.println(currentMode);
  delay(500);
}