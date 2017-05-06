
int pinCLKX = 4;  // Connected to CLK on KY-040

  int val;
void setup() {
  Serial.begin(9600);
  pinMode(pinCLKX, INPUT);

}

void loop() {
val = digitalRead(pinCLKX);
    Serial.println(val);

}
