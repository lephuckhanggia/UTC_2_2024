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
void Run_Button_Stage() {
    if (V_But1 == LOW) {
        currentMode = 1;
        digitalWrite(Led1, HIGH);
        digitalWrite(Led2, LOW);
    }
    if (V_But2 == LOW) {
        currentMode = 2;
        digitalWrite(Led1, HIGH);
        digitalWrite(Led2, HIGH);
    }
    if (V_But3 == LOW) {
        currentMode = 3;
        digitalWrite(Led1, LOW);
        digitalWrite(Led2, HIGH);
    }
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
