
int pinYrun = 32;
int pinYH = 5;
int pinYAH = 6;
int n = 0;
int pinEncodeur = 7;
int dernval;

void setup() {
    Serial.begin(9600);
    pinMode(pinYrun, OUTPUT);
    pinMode(22,OUTPUT);
    pinMode(pinYH, OUTPUT);
    pinMode(pinYAH, OUTPUT);
    pinMode(pinEncodeur, INPUT);
    dernval = digitalRead(pinEncodeur);
    Serial.println(n);
    digitalWrite(22, LOW);
}

void loop() {//180° Horraire : 1:13,95
             //180° AHorraire : 1:18,05
  digitalWrite(pinYrun, HIGH);
  digitalWrite(pinYH, LOW);
  digitalWrite(pinYAH, HIGH);
  if(digitalRead(pinEncodeur) != dernval){
    n = n+1;
    Serial.println(n);
    dernval=digitalRead(pinEncodeur);
  }

}
