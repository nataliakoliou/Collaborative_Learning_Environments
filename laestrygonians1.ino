/* Laestrygonians_Activity_1
Distance Sensor | Measure the distance from an obstacle by using ultrasound */
int echoPin = 12;  // echo Pin
int trigPin = 13;  // trigger Pin
int maximumRange = 200;  // maximum range needed
int minimumRange = 0;  // minimum range needed
long duration, distance;  // duration used to calculate distance
// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
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
  distance = duration/58.2;  // calculation of distance in cm
  if (distance >= maximumRange || distance <=minimumRange){
   Serial.println(distance);
   delay(50);
  }
  else {
    Serial.println(distance);
    delay(50);
  }
  delay(50);
 }
