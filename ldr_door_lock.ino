const int LDR_PIN = 2;      
const int RELAY_PIN = 8;    

void setup() {
  pinMode(LDR_PIN, INPUT);
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, HIGH);
  Serial.begin(9600);
}

void loop() {
  int ldrState = digitalRead(LDR_PIN); 
  Serial.print("LDR State: ");
  Serial.println(ldrState);

  if (ldrState == LOW) { 
    digitalWrite(RELAY_PIN, LOW); 
    Serial.println("Door Unlocked");
  } else {
    digitalWrite(RELAY_PIN, HIGH);
  }
  delay(500);
}

