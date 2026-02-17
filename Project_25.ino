//Project 25

#define LED 13
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  attachInterrupt(0, displaySad, RISING);
  attachInterrupt(1, displayHappy, RISING);
}
void displaySad(){
  Serial.write("sad() = ");
  Serial.println(":(");
}
void displayHappy(){
  Serial.write("happy() = ");
  Serial.println(":)");
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(500);
  digitalWrite(LED, LOW);
  delay(500);

}
