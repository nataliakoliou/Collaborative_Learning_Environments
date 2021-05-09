/* Circe_Activity_1
LCD Monitor | Use an LCD monitor instead of the serial screen to receive the appropriate messages. */
#include <LiquidCrystal.h> // include LiquidCrystal_I2C.h library
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2; /* initialize the library by associating
any needed LCD interface pin with the arduino pin number it is connected to */
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
// the setup function runs once when you press reset or power the board
void setup() {
  lcd.begin(16, 2); // set up the LCD's number of columns and rows
  lcd.print("hello, world!"); // print the "Hello World" message on the screen
}
// the loop function runs over and over again
void loop() {
}
