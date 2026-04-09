void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(D10, OUTPUT);
  pinMode(D9, OUTPUT);
  pinMode(D8, OUTPUT);
  digitalWrite(D8, HIGH);
}

void loop() {
  for (int i = 0; i <= 50/50; i++) {
    digitalWrite(LED_BUILTIN, HIGH);
    digitalWrite(D10, HIGH);
    delay(50);
    digitalWrite(LED_BUILTIN, LOW);
    digitalWrite(D10, LOW);
    delay(50);
  }
  digitalWrite(D9, HIGH);
  for (int i = 0; i <= 100/50; i++) {
    digitalWrite(LED_BUILTIN, HIGH);
    digitalWrite(D10, HIGH);
    delay(50);
    digitalWrite(LED_BUILTIN, LOW);
    digitalWrite(D10, LOW);
    delay(50);
  }
  digitalWrite(D9, LOW);
}
