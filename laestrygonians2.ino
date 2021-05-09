/* Laestrygonians_Activity_2
Proximity Alarm | Creates a proximity alarm by adding an audible buzzer that produces sound
as soon as an object gets too close to the ultrasonic sensor. */
int echoPin=12; // pin echo of the ultrasound board
int trigPin=13; // pin trigger of the ultrasound board
int alarmPin=5; // buzzer
int maximumRange=200;  // maximum range
int minimumRange=0;  // minimum range
int alarmRange=10;  // distance at which the alarm goes off
float duration, distance;
// the setup function runs once when you press reset or power the board
void setup() { 
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode (alarmPin,OUTPUT);
  Serial.begin(9600);
}
// the loop function runs over and over again forever
void loop() {
 digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);

  distance = duration/58.2;  // calculate the distance in cm by using the speed of the sound
  if (distance >= maximumRange || distance <=minimumRange){
    Serial.println("εκτος οριων");
    delay(100);
  }
  else {
    digitalWrite(5,LOW);  // turn of the buzzer
  }
  delay(50);  // wait for 50 milliseconds 
}
