/* Aeolus_Activity_1
Thermometer | Reads the voltage that corresponds to the temperature received from the temperature
sensor and displays it on the serial monitor. */
int a; // integer analog input (0-1023)
float temp; // decimal temperature values
// the setup function runs once when you press reset or power the board
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); // prepare serial monitor
}
// the loop function runs over and over again forever
void loop() {
  // put your main code here, to run repeatedly:
 a=analogRead(A0);  // read analog value from pin A0
 temp= (5.0*analogRead(A0)*100.0)/1023;  // compute the temperature
 Serial.print(temp);  // print the temperature value to the serial monitor into celsius
 Serial.println(" C");  //print the symbol C for celsius
 delay(1000);  // wait for 1 second
}
