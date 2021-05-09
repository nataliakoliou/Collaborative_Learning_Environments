/* Laestrygonians_Activity_3
Servomechanism | Uses a servomechanism to rotate objects. */
#include <Servo.h> // include library to execute servomechanism commands
Servo myservo; // create an object of type Servo
int potpin =A0; // pin of potensiometer (analog input A0)
int a; // store the value we read with the potensiometer (0-1023)
int val; // store the value we will send to the servo (180)
// the setup function runs once when you press reset or power the board
void setup() {
  myservo.attach(9); // attach myservo object to pin 9
  Serial.begin(9600);  // prepare serial monitor
}
// the loop function runs over and over again forever
void loop() {
 a = analogRead(potpin); // read the value of the potensiometer's pin and store it in variable a
 val = map(a, 0, 1023, 0, 180); // change the value of a to vary from 0-1023 to 0-180, then store it to variable val
 myservo.write(val);
 Serial.println(val); // print the value of val to the serial monitor
 delay(15); // wait for 15 milliseconds
}
