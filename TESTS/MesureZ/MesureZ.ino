int pinZrun = 42;
int pinZH = 8;
int pinZAH = 9;
int n = 0;
int pinEncodeur = 10;
int dernval;

void setup() {
    Serial.begin(9600);
    pinMode(pinZrun, OUTPUT);
    pinMode(pinZH, OUTPUT);
    pinMode(pinZAH, OUTPUT);
    pinMode(pinEncodeur, INPUT);
    dernval = digitalRead(pinEncodeur);
    Serial.println(n);
}

void loop() {//4518 POS Descente:27,11s Montée
  digitalWrite(pinZrun, HIGH);
  digitalWrite(pinZH, LOW);
  digitalWrite(pinZAH, HIGH);
  if(digitalRead(pinEncodeur) != dernval){
    n = n+1;
    Serial.println(n);
    dernval=digitalRead(pinEncodeur);
  }

}
