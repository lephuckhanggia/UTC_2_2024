void Read_Sensor_Value() 
{
 V_CB1 = digitalRead(CB1);
 V_CB2 = digitalRead(CB2);
 V_CB3 = digitalRead(CB3);
 V_CB4 = digitalRead(CB4);
 V_CB5 = digitalRead(CB5);
}
void Read_Button_Value() 
{
 V_But1 = digitalRead(But1);
 V_But2 = digitalRead(But2);
 V_But3 = digitalRead(But3);
}
void Print_Sensor_Value() 
{
  Serial.print("CB1: ");
  Serial.print(V_CB1);
  Serial.print("  CB2: ");
  Serial.print(V_CB2);  
  Serial.print("  CB3: ");
  Serial.print(V_CB3);
  Serial.print("  CB4: ");
  Serial.print(V_CB4);
  Serial.print("  CB5: ");
  Serial.print(V_CB5);
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
