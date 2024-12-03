int currentMode = 0;
//Speed
int SpeedMax = 60;  //perfect 60
int SpeedMin_1 = 40;  //40
int SpeedMin_2 = 40;
int SpeedLech = 10; //20
int SpeedLui = 30;  //30

//A-Trai B-Phai
int SpeedA = SpeedMax + SpeedLech ;
int SpeedB = SpeedMax ;
int SpeedMinA_1 = SpeedMin_1+ SpeedLech;
int SpeedMinB_1 = SpeedMin_1 ;
int SpeedMinA_2 = SpeedMin_2 + SpeedLech;
int SpeedMinB_2 = SpeedMin_2;

//Sensors
#define CB1 8
#define CB2 9
#define CB3 10 
#define CB4 11
#define CB5 12
int V_CB1, V_CB2, V_CB3, V_CB4, V_CB5;

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
int Turn90Delay = 200;    //150-200
int Status = 0;
int Cua = 0;

void Variable_status() {
  pinMode(CB1, INPUT);
  pinMode(CB2, INPUT);
  pinMode(CB3, INPUT);

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
