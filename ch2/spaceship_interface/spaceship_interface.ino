int switchState = 0;

void setup() {
  // Lights
  pinMode(3, OUTPUT); // Green
  pinMode(4, OUTPUT); // Red
  pinMode(5, OUTPUT);
  
  // Switch
  pinMode(2, INPUT);
}

void loop() {
  switchState = digitalRead(2);
  
  // Is the button pressed
  if (switchState == LOW) {
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);    
  } else {
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    
    delay(250);
    
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(250);
  }
}
