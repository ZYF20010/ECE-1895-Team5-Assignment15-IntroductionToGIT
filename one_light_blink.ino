// Comment for Assignment 13 - Ethan Lee (EJL63)
// Albert Sommar (ADS231)
// Yifan Zuo (YIZ231)
#define redLED 8
#define pushButton 9

void setup() {
  // put your setup code here, to run once:
  // Initialize digital pin redLED as an output.
  pinMode(redLED, OUTPUT);

  // Initialize pushButton as input.
  pinMode(pushButton, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(pushButton) == HIGH) {
    digitalWrite(redLED, HIGH);
    delay(1000);
    digitalWrite(redLED, LOW);
    delay(1000);
  }
}
