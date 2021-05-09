/* Cyclopes_Activity_3
Button | Turns on and off two lights emitting diode(LED) connected to digital pin 5 and 6,
when pressing a pushbutton attached to pin 2. */
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize the LED pins as an output
  pinMode(5, OUTPUT);   // red LED light
  pinMode(6, OUTPUT);   // green LED light
  // initialize the pushbutton pin as an input:
  pinMode(2, INPUT);   // button
}
// the loop function runs over and over again forever
void loop() {
  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (digitalRead(2) == HIGH) {   // if button is pressed...
    digitalWrite(5, HIGH);   // turn on the red LED
  } else {
    digitalWrite(5, LOW);   // turn off the red LED
  }
  digitalWrite(6, HIGH);   // turn on the green LED
  delay(3000); // wait for 3 seconds
  digitalWrite(6, LOW);   // turn off the green LED
  delay(3000); // wait for 3 seconds
}
