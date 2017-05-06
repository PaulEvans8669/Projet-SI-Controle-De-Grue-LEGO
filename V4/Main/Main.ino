#define rayonEncodeur 0.06 //cm

//Caractéristiques Grue
int longeurMat = 80; //cm
int hauteurGrue = 100; //cm 
//Caractéristiques Grue


//Motor X
  //Motor Control Pins
    int pinXrun = 22;
    int pinXH = 2;
    int pinXAH = 3;
  //Motor Control Pins
  //Encoder Pins
    int pinCLKX = 4;  // Connected to CLK on KY-040
    int pinMotorXSwitch = 24;
  //Encoder Pins
  //Motor Data
    String sensX;
    int posChaineAEncodeurX = 1; // Varie entre 0 et 1 pour prendre 1 valeur sur 2 de la chaine A car durée à la position 1 =/= durée à la position 0. 
    float rotationX1 = 0; // temps en ms quand la rotation a commencé (0 au début)
    const int rapportEngrenagesX = 18; // <=> degrés par changement de position de A 
    float nacellePositionX = 0; // position de la nacelle
    int pinCLKXLastValue; //valeur précédente de pinCLKZValue
    int pinCLKXValue; // valeur de la chaîne A de la broche CLK de l'encodeur du moteur Z
  //Motor Data
//Motor X

//Motor Y
  //Motor Control Pins
    int pinYrun = 32;
    int pinYH = 5;
    int pinYAH = 6;
  //Motor Control Pins
  //Encoder Pins
    int pinCLKY = 7;  // Connected to CLK on KY-040
    int pinMotorYSwitch = 34;
  //Encoder Pins
  //Motor Data
    String sensY;
    int posChaineAEncodeurY = 1; // Varie entre 0 et 1 pour prendre 1 valeur sur 2 de la chaine A car durée à la position 1 =/= durée à la position 0. 
    float rotationY1 = 0; // temps en ms quand la rotation a commencé (0 au début)
    const int rapportEngrenagesY = 18; // <=> degrés par changement de position de A 
    float BrasAngleY = 0; // position du moteur
    int pinCLKYLastValue; //valeur précédente de pinCLKZValue
    int pinCLKYValue; // valeur de la chaîne A de la broche CLK de l'encodeur du moteur Z
  //Motor Data
//Motor Y

//Motor Z
  //Motor Control Pins
    int pinZrun = 42;
    int pinZH = 8;
    int pinZAH = 9;
  //Motor Control Pins
  //Encoder Pins
    int pinCLKZ = 10;  // Connected to CLK on KY-040
    int pinMotorZSwitch = 44;
  //Encoder Pins
  //Motor Data
    String sensZ;
    int posChaineAEncodeurZ = 1; // Varie entre 0 et 1 pour prendre 1 valeur sur 2 de la chaine A car durée à la position 1 =/= durée à la position 0. 
    float rotationZ1 = 0; // temps en ms quand la rotation a commencé (0 au début)
    const int rapportEngrenagesZ = 18; // <=> degrés par changement de position de A 
    float NacelleHauteurZ = 0; // position du moteur
    int pinCLKZLastValue; //valeur précédente de pinCLKZValue
    int pinCLKZValue; // valeur de la chaîne A de la broche CLK de l'encodeur du moteur Z
  //Motor Data
//Motor Z


String X = "X";
String Y = "Y";
String Z = "Z";
String H = "HORAIRE";
String AH = "AHORAIRE";

void setup() {
    Serial.begin(9600);

    
    pinMode(pinXrun, OUTPUT);
    pinMode(pinXH, OUTPUT);
    pinMode(pinXAH, OUTPUT);
    pinMode (pinCLKX,INPUT);
    pinMode (pinMotorXSwitch,INPUT_PULLUP);
    pinCLKXLastValue = digitalRead(pinCLKX);   
    
    pinMode(pinYrun, OUTPUT);
    pinMode(pinYH, OUTPUT);
    pinMode(pinYAH, OUTPUT);
    pinMode (pinCLKY,INPUT);
    pinMode (pinMotorYSwitch,INPUT_PULLUP);
    pinCLKYLastValue = digitalRead(pinCLKY); 

    
    pinMode(pinZrun, OUTPUT);
    pinMode(pinZH, OUTPUT);
    pinMode(pinZAH, OUTPUT);
    pinMode (pinCLKZ,INPUT);
    pinMode (pinMotorZSwitch,INPUT_PULLUP);
    pinCLKZLastValue = digitalRead(pinCLKZ); 
    
}

void loop() {
  groupedMovement(20,20,20);
  
    
}



   
  


  
