int lightPin = A0;
int buzzPin = 12;
int lightVal;
// delay time (buzz tone in msec)
int dt;

void setup() {
pinMode(lightPin, INPUT);
pinMode(buzzPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
lightVal = analogRead(lightPin);
// buzz point slope
dt = (9./550.)*lightVal-(9.*200/550)+1;
digitalWrite(buzzPin, HIGH);
delay(dt);
digitalWrite(buzzPin, LOW);
delay(dt);
}
