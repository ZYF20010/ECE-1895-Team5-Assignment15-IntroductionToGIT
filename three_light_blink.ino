// Comment for Assignment 13 (2nd comment) - Ethan Lee (EJL63) 
// Albert Sommar (ADS231)
#define redLED 8
#define yellowLED 6
#define orangeLED 7
#define pushButton 9

void setup() {
  // put your setup code here, to run once:
  // Initialize digital pins redLED, yellowLED, and orangeLED as outputs.
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(orangeLED, OUTPUT);

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
    digitalWrite(yellowLED, HIGH);
    delay(1000);
    digitalWrite(yellowLED, LOW);
    delay(1000);
    digitalWrite(orangeLED, HIGH);
    delay(1000);
    digitalWrite(orangeLED, LOW);
    delay(1000);
  }
}
