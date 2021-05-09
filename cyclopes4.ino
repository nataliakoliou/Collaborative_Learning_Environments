/* Cyclopes_Activity_4
Potentiometer | Reads the value of a Potentiometer connected to A0, then uses the results to write the
brightness on a LED light connected on pin 5. Finally, it prints the values on the serial monitor. */
int pot, brightness; // pot and brightness are integers
// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(5, OUTPUT); // digital pin 5 output
  Serial.begin(9600); // start the serial monitor
}
// the loop function runs over and over again forever
void loop() {
  // read the potentiometer's value:
  pot=analogRead(A0); // save the analog value A0 of the potentiometer to the variable pot (0-1023)
  brightness=map(pot, 0, 1023, 0, 255); // transform pot values to range 0-255 and save values to brightness
  analogWrite(5, brightness); // write the value of brightness to the digital pin 5 (PWM)
  Serial.println(pot);  // print the value of pot to the serial monitor and break line
  delay(10);   // wait 10 milliseconds before the next loop
}
