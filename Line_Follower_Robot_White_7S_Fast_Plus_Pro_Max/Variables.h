int currentMode = 0;
//Speed //12.2V
int SpeedMax = 225;  //55 
int SpeedMin_1 = 180;  //50
int SpeedMin_2 = 100;  //40
int SpeedMin_3 = 10;  //40
int SpeedLech = 30; //15.5

//A-Trai B-Phai
int SpeedA = SpeedMax + SpeedLech ;
int SpeedB = SpeedMax ;
int SpeedMinA_1 = SpeedMin_1+ SpeedLech;
int SpeedMinB_1 = SpeedMin_1 ;
int SpeedMinA_2 = SpeedMin_2 + SpeedLech;
int SpeedMinB_2 = SpeedMin_2;
int SpeedMinA_3 = SpeedMin_3 + SpeedLech; 
int SpeedMinB_3 = SpeedMin_3;

//Others
int Turn90Delay = 10;    //150-200
int Turn_check = 0;
int Turning = 0;
int Time = 0;
int Start = 0;
//Sensors
#define STL 8
#define S1 A2
#define S2 9
#define S3 10 
#define S4 11
#define S5 A3
#define STR 12
#define SB A5

int V_STL ,V_S1, V_S2, V_S3, V_S4, V_S5, V_STR, V_SB;

//L298n driver
#define EnA 6
#define In1 5
#define In2 7
#define In3 2
#define In4 4
#define EnB 3

//Stage_button
#define But1 A0
#define But2 0
#define But3 1
bool V_But1, V_But2, V_But3;

//Led_stage_button
#define Led1 A4
#define Led2 A1

void Variable_Status() {
  pinMode(STL, INPUT);
  pinMode(S1, INPUT);
  pinMode(S2, INPUT);
  pinMode(S3, INPUT);
  pinMode(S4, INPUT);
  pinMode(S5, INPUT);
  pinMode(STR, INPUT);
  pinMode(SB, INPUT);

  pinMode(But1, INPUT_PULLUP);
  pinMode(But2, INPUT_PULLUP);
  pinMode(But3, INPUT_PULLUP);
  
  pinMode(EnA, OUTPUT);
  pinMode(In1, OUTPUT);
  pinMode(In2, OUTPUT);
  pinMode(In3, OUTPUT);
  pinMode(In4, OUTPUT);
  pinMode(EnB, OUTPUT);

  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);

  Serial.begin(9600);
}
