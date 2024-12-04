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

void White_Line_Following()
{
    if (V_S1 == 0 && V_S2 == 0 && V_S3 == 0 && V_S4 == 0 && V_S5 == 0 && Turning == 0)     // 0-0-0-0-0
    {
        Turn_check = 0;
        Run_Straight();
    }
    if (V_S1 == 1 && V_S2 == 0 && V_S3 == 0 && V_S4 == 0 && V_S5 == 1 )     // 1-0-0-0-1
    {
        Turn_check = 1;
        Run_Straight();
        Turning = 0;
    }
    if (V_S1 == 1 && V_S2 == 1 && V_S3 == 0 && V_S4 == 1 && V_S5 == 1) // 1-1-0-1-1
    {
        Turn_check = 1;
        Run_Straight();
        Turning = 0;
    }
    //Lech 1
    if (V_S1 == 1 && V_S2 == 0 && V_S3 == 0 && V_S4 == 1 && V_S5 == 1 ) // 1-0-0-1-1
    {
        Turn_check = 1;
        Slight_Turn_Left_1();
    }
    if (V_S1 == 1 && V_S2 == 1 && V_S3 == 0 && V_S4 == 0 && V_S5 == 1 ) // 1-1-0-0-1
    { 
        Turn_check = 1;
        Slight_Turn_Right_1();
    }
    //Lech 2
    if (V_S1 == 1 && V_S2 == 1 && V_S3 == 1 && V_S4 == 0 && V_S5 == 1 && Turning == 0) // 1-1-1-0-1
    {   
        Turn_check = 1;
        Slight_Turn_Right_2();
    }
    if (V_S1 == 1 && V_S2 == 0 && V_S3 == 1 && V_S4 == 1 && V_S5 == 1 && Turning == 0) // 1-0-1-1-1
    {
        Turn_check = 1;
        Slight_Turn_Left_2();
    }
    //Lech 3
    if (V_S1 == 1 && V_S2 == 1 && V_S3 == 1 && V_S4 == 1 && V_S5 == 0 && Turning == 0) // 1-1-1-1-0
    {
        Turn_check = 1;
        OneWD_Turn_Right();
    }
    if (V_S1 == 0 && V_S2 == 1 && V_S3 == 1 && V_S4 == 1 && V_S5 == 1 && Turning == 0) // 0-1-1-1-1
    {
        Turn_check = 1;
        OneWD_Turn_Left();
    }
    //Turning
    if (V_STL == 0 && V_S1 == 0 && V_S2 == 1 && V_S3 == 1 && V_S4 == 1 && V_S5 == 1 && V_STR == 1 && Turn_check == 1  // 0-0-1-1-1-1-1
    or V_STL == 0 && V_S1 == 0 && V_S2 == 0 && V_S3 == 1 && V_S4 == 1 && V_S5 == 1 && V_STR == 1 && Turn_check == 1   // 0-0-0-1-1-1-1
    or V_STL == 0 && V_S1 == 0 && V_S2 == 0 && V_S3 == 0 && V_S4 == 1 && V_S5 == 1 && V_STR == 1 && Turn_check == 1 // 0-0-0-0-1-1-1
    or V_STL == 0 && V_S1 == 0 && V_S2 == 0 && V_S3 == 0 && V_S4 == 0 && V_S5 == 1 && V_STR == 1 && Turn_check == 1) // 0-0-0-0-0-1-1 
    {
        Turning = 1;
        Run_Straight();
        delay(Turn90Delay);
        TwoWD_Turn_Left();
        Turn_check = 0;
    }
    if (V_STL == 1 && V_S1 == 1 && V_S2 == 1 && V_S3 == 1 && V_S4 == 1 && V_S5 == 0 && V_STR == 0 && Turn_check == 1 // 1-1-1-1-1-0-0
    or V_STL == 1 && V_S1 == 1 && V_S2 == 1 && V_S3 == 1 && V_S4 == 0 && V_S5 == 0 && V_STR == 0 && Turn_check == 1 // 1-1-1-1-0-0-0
    or V_STL == 1 && V_S1 == 1 && V_S2 == 1 && V_S3 == 0 && V_S4 == 0 && V_S5 == 0 && V_STR == 0 && Turn_check == 1  //1-1-1-0-0-0-0
    or V_STL == 1 && V_S1 == 1 && V_S2 == 0 && V_S3 == 0 && V_S4 == 0 && V_S5 == 0 && V_STR == 0 && Turn_check == 1) // 1-1-0-0-0-0-0
    {
        Turning = 1;
        Run_Straight();
        delay(Turn90Delay);
        TwoWD_Turn_Right();
        Turn_check = 0;
    }
}
