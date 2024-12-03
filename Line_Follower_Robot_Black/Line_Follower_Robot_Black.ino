#include "Variables.h"
#include "Stage_Read_Sensor_value.h"
#include "Motor_Driver.h"
void setup() {
  Variable_status();
}

void loop() {
  Read_Button_Value(); 
  Run_Button_Stage();
  switch (currentMode) {
        case 1:
            Read_Sensor_Value();
            Black_Line_Following();
            break;
        case 2:
            Run_Straight();
            break;
        case 3:
            Stop();
            break;
        default:
            // No active mode
            break;
    }
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
void Black_Line_Following()
{
    if (V_CB1 == 1 && V_CB2 == 1 && V_CB3 == 1 && V_CB4 == 1 && V_CB5 == 1 && Cua == 0)     // 1-1-1-1-1
    {
        Run_Straight();
    }
    else if (V_CB1 == 0 && V_CB2 == 0 && V_CB3 == 0 && V_CB4 == 0 && V_CB5 == 0 && Cua == 0)     // 0-0-0-0-0
    {
        Run_Straight();
    }
    else if (V_CB1 == 0 && V_CB2 == 1 && V_CB3 == 1 && V_CB4 == 1 && V_CB5 == 0 && Cua == 0)     // 0-1-1-1-0
    {
        Run_Straight();
    }
    else if (V_CB1 == 0 && V_CB2 == 0 && V_CB3 == 1 && V_CB4 == 0 && V_CB5 == 0 ) // 0-0-1-0-0
    {
        Cua = 0;
        Status = 1;
        Run_Straight();
    }
    //Lech 1
    else if (V_CB1 == 0 && V_CB2 == 1 && V_CB3 == 1 && V_CB4 == 0 && V_CB5 == 0 ) // 0-1-1-0-0
    {
        Cua = 0;
        Status = 1;
        Slight_Turn_Left_1();
    }
    else if (V_CB1 == 0 && V_CB2 == 0 && V_CB3 == 1 && V_CB4 == 1 && V_CB5 == 0 ) // 0-0-1-1-0
    {
        Cua = 0;
        Status = 1;
        Slight_Turn_Right_1();
    }
    //Lech 2
    else if (V_CB1 == 0 && V_CB2 == 0 && V_CB3 == 0 && V_CB4 == 1 && V_CB5 == 0 ) // 0-0-0-1-0
    {   
        Cua = 0;
        Status = 1;
        Slight_Turn_Right_2();
    }
    else if (V_CB1 == 0 && V_CB2 == 1 && V_CB3 == 0 && V_CB4 == 0 && V_CB5 == 0 ) // 0-1-0-0-0
    {
        Cua = 0;
        Status = 1;
        Slight_Turn_Left_2();
    }
    //Lech 3
    else if (V_CB1 == 0 && V_CB2 == 0 && V_CB3 == 0 && V_CB4 == 0 && V_CB5 == 1 && Cua == 0) // 0-0-0-0-1
    {
        Status = 0;
        OneWD_Turn_Right();
    }
    else if (V_CB1 == 1 && V_CB2 == 0 && V_CB3 == 0 && V_CB4 == 0 && V_CB5 == 0 && Cua == 0) // 1-0-0-0-0
    {
        Status = 0;
        OneWD_Turn_Left();
    }
    //Cua
    else if (V_CB1 == 0 && V_CB2 == 0 && V_CB3 == 0 && V_CB4 == 1 && V_CB5 == 1 && Status == 1) // 0-0-0-1-1
    {
        Cua = 1;
        Status = 0;
        Run_Straight();
        delay(Turn90Delay);
        TwoWD_Turn_Right();
    }
    else if (V_CB1 == 1 && V_CB2 == 1 && V_CB3 == 0 && V_CB4 == 0 && V_CB5 == 0 && Status == 1) // 1-1-0-0-0
    {
        Cua = 1;
        Status = 0;
        Run_Straight();
        delay(Turn90Delay);
        TwoWD_Turn_Left();
    }
    else if (V_CB1 == 0 && V_CB2 == 0 && V_CB3 == 1 && V_CB4 == 1 && V_CB5 == 1 && Status == 1) // 0-0-1-1-1
    {
        Cua = 1;
        Status = 0;
        Run_Straight();
        delay(Turn90Delay);
        TwoWD_Turn_Right();
    }
    else if (V_CB1 == 1 && V_CB2 == 1 && V_CB3 == 1 && V_CB4 == 0 && V_CB5 == 0 && Status == 1) // 1-1-1-0-0
    {
        Cua = 1;
        Status = 0;
        Run_Straight();
        delay(Turn90Delay);
        TwoWD_Turn_Left();
    }
    else if (V_CB1 == 0 && V_CB2 == 1 && V_CB3 == 1 && V_CB4 == 1 && V_CB5 == 1 && Status == 1) // 0-1-1-1-1
    {
        Cua = 1;
        Status = 0;
        Run_Straight();
        delay(Turn90Delay);
        TwoWD_Turn_Right();
    }
    else if (V_CB1 == 1 && V_CB2 == 1 && V_CB3 == 1 && V_CB4 == 1 && V_CB5 == 0 && Status == 1) // 1-1-1-1-0
    {
        Cua = 1;
        Status = 0;
        Run_Straight();
        delay(Turn90Delay);
        TwoWD_Turn_Left();
    }
}
