int red = 10;
int yellow = 9;
int green = 8;
int button = 7;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);

  pinMode(button, INPUT_PULLUP);  // IMPORTANT
}

void loop() {

  int state = digitalRead(button);

  if (state == LOW) {   // button pressed
    // Emergency mode
    digitalWrite(red, HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(green, LOW);
  
    
  }
  else 
  {
    // Normal traffic signal
    digitalWrite(green, HIGH);
    delay(3000);

    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    delay(1000);

    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
    delay(3000);

    digitalWrite(red, LOW);
  }
}