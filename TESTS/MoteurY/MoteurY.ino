
int pinYrun = 32;
int pinYH = 5;
int pinYAH = 6;


void setup() {
    Serial.begin(9600);
    pinMode(22, OUTPUT);
    pinMode(pinYrun, OUTPUT);
    pinMode(pinYH, OUTPUT);
    pinMode(pinYAH, OUTPUT);
}

void loop() {
  digitalWrite(22, LOW);
  digitalWrite(pinYrun, HIGH);
  digitalWrite(pinYH, LOW);
  digitalWrite(pinYAH, HIGH);

}
