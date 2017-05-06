
int pinXrun = 22;
int pinXH = 2;
int pinXAH = 3;


void setup() {
    Serial.begin(9600);
    pinMode(pinXrun, OUTPUT);
    pinMode(pinXH, OUTPUT);
    pinMode(pinXAH, OUTPUT);
}

void loop() {
  digitalWrite(pinXrun, HIGH);
  digitalWrite(pinXH, HIGH);
  digitalWrite(pinXAH, LOW);

}
