#include "Variables.h"
#include "Stage_Read_Sensor_value.h"
#include "Motor_Driver.h"
void setup() {
  Variable_Status();
}

void loop() {
  Read_Button_Value(); 
  Run_Button_Stage();
  switch (currentMode) {
        case 1:
            Read_Sensor_Value();
            White_Line_Following();
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
void White_Line_Following()
{
    if (V_S1 == 0 && V_S2 == 0 && V_S3 == 0 && V_S4 == 0 && V_S5 == 0 && Turning == 0)     // 0-0-0-0-0
    {
        Turn_check = 0;
        Run_Straight();
    }
    //else if (V_S1 == 1 && V_S2 == 1 && V_S3 == 1 && V_S4 == 1 && V_S5 == 1 && Turning == 0)     // 1-1-1-1-1
    //{
    //    Turn_check = 0;    
    //    Run_Straight();
    //}
    else if (V_S1 == 1 && V_S2 == 0 && V_S3 == 0 && V_S4 == 0 && V_S5 == 1 && Turning == 0)     // 1-0-0-0-1
    {
        Turn_check = 0;
        Run_Straight();
    }
    else if (V_S1 == 1 && V_S2 == 1 && V_S3 == 0 && V_S4 == 1 && V_S5 == 1) // 1-1-0-1-1
    {
        Turn_check = 1;
        Run_Straight();
        Turning = 0;
    }
    //Lech 1
    else if (V_S1 == 1 && V_S2 == 0 && V_S3 == 0 && V_S4 == 1 && V_S5 == 1 && Turning == 0) // 1-0-0-1-1
    {
        Turn_check = 1;
        Slight_Turn_Left_1();
    }
    else if (V_S1 == 1 && V_S2 == 1 && V_S3 == 0 && V_S4 == 0 && V_S5 == 1 && Turning == 0) // 1-1-0-0-1
    {
        Turn_check = 1;
        Slight_Turn_Right_1();
    }
    //Lech 2
    else if (V_S1 == 1 && V_S2 == 1 && V_S3 == 1 && V_S4 == 0 && V_S5 == 1 && Turning == 0) // 1-1-1-0-1
    {   
        Turn_check = 1;
        Slight_Turn_Right_2();
    }
    else if (V_S1 == 1 && V_S2 == 0 && V_S3 == 1 && V_S4 == 1 && V_S5 == 1 && Turning == 0) // 1-0-1-1-1
    {
        Turn_check = 1;
        Slight_Turn_Left_2();
    }
    //Lech 3
    else if (V_S1 == 1 && V_S2 == 1 && V_S3 == 1 && V_S4 == 1 && V_S5 == 0 && Turning == 0) // 1-1-1-1-0
    {
        Turn_check = 1;
        OneWD_Turn_Right();
    }
    else if (V_S1 == 0 && V_S2 == 1 && V_S3 == 1 && V_S4 == 1 && V_S5 == 1 && Turning == 0) // 0-1-1-1-1
    {
        Turn_check = 1;
        OneWD_Turn_Left();
    }
    //Turning
    else if (V_S1 == 0 && V_S2 == 0 && V_S3 == 1 && V_S4 == 1 && V_S5 == 1 && Turn_check == 1   // 0-0-1-1-1 
    or V_S1 == 0 && V_S2 == 0 && V_S3 == 0 && V_S4 == 1 && V_S5 == 1 && Turn_check == 1 // 0-0-0-1-1
    or V_S1 == 0 && V_S2 == 0 && V_S3 == 0 && V_S4 == 0 && V_S5 == 1 && Turn_check == 1) // 0-0-0-0-1 
    {
        Turning = 1;
        Run_Straight_Turn();
        delay(Turn90Delay);
        TwoWD_Turn_Left();
        Turn_check = 0;
    }
    else if (V_S1 == 1 && V_S2 == 1 && V_S3 == 1 && V_S4 == 0 && V_S5 == 0 && Turn_check == 1 // 1-1-1-0-0
    or V_S1 == 1 && V_S2 == 1 && V_S3 == 0 && V_S4 == 0 && V_S5 == 0 && Turn_check == 1  //1-1-0-0-0
    or V_S1 == 1 && V_S2 == 0 && V_S3 == 0 && V_S4 == 0 && V_S5 == 0 && Turn_check == 1) // 1-0-0-0-0
    {
        Turning = 1;
        Run_Straight_Turn();
        delay(Turn90Delay);
        TwoWD_Turn_Right();
        Turn_check = 0;
    }
}
