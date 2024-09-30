void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(13,OUTPUT);
}

void loop() {
  for(int i = 0; i < 1024; i+=10){
   int j = map(i, 0, 1023, 0, 100)
   Serial.print("z0.val=");  // This is sent to the nextion display to set what object name (before the dot) and what atribute (after the dot) are you going to change.
   Serial.print(j);  // This is the value you want to send to that object and atribute mention before.
   Serial.write(0xff);  // We always have to send this three lines after each command sent to the nextion display.
   Serial.write(0xff);
   Serial.write(0xff);
}


