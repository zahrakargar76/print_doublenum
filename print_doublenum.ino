void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    int num = Serial.parseInt();
    int doublenum = num * 2;
    Serial.print("doublenum:");
    Serial.println(doublenum);
  }
}
