int currentMode = 0;
//Speed
int SpeedMax = 52;  //perfect 60
int SpeedMin_1 = 15;  //40
int SpeedMin_2 = 15;
int SpeedLech = 10; //20

//A-Trai B-Phai
int SpeedA = SpeedMax + SpeedLech ;
int SpeedB = SpeedMax ;
int SpeedMinA_1 = SpeedMin_1+ SpeedLech;
int SpeedMinB_1 = SpeedMin_1 ;
int SpeedMinA_2 = SpeedMin_2 + SpeedLech;
int SpeedMinB_2 = SpeedMin_2;

//Sensors
#define S1 8
#define S2 9
#define S3 10 
#define S4 11
#define S5 12
#define SB A5
int V_S1, V_S2, V_S3, V_S4, V_S5, V_SB;

//L298n driver
#define EnA 6
#define In1 5
#define In2 7
#define In3 2
#define In4 4
#define EnB 3

//Stage_button
#define But1 A3
#define But2 A0
#define But3 A2
bool V_But1, V_But2, V_But3;

//Led_stage_button
#define Led1 A4
#define Led2 A1


//Others
int Turn90Delay = 300;    //150-200
int Stop_Turn90Delay = 100;
int Turn_check = 0;
int Turning = 0;

void Variable_Status() {
  pinMode(S1, INPUT);
  pinMode(S2, INPUT);
  pinMode(S3, INPUT);
  pinMode(S4, INPUT);
  pinMode(S5, INPUT);
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
