/* Cyclopes_Activity_2
Fade-In Fade-out | This example shows how to fade an LED on pin 10 */
// initialize digital pin LED_BUILTIN=10 as an output and set brightness to 0.
int ledPin = 10;
int brightness = 0;
// the setup function runs once when you press reset or power the board
void setup() { 
  pinMode(ledPin, OUTPUT);  
}
// the loop function runs over and over again forever
void loop() {
  if (brightness == 255) {
    brightness = 0;
  };  
  analogWrite(ledPin, brightness);
  brightness = brightness +5;
  delay(100);
}
