#define LPWMPIN 3
#define LIN1PIN 2
#define LIN2PIN A3 //21
 #define RPWMPIN 5
 #define RIN1PIN A2 //20
 #define RIN2PIN 4
 
void setup() {
   pinMode(LPWMPIN, OUTPUT);
   pinMode(LIN1PIN, OUTPUT);
   pinMode(LIN2PIN, OUTPUT);
   pinMode(RPWMPIN, OUTPUT);
   pinMode(RIN1PIN, OUTPUT);
   pinMode(RIN2PIN, OUTPUT);
   stop();
}

void loop() {
   analogWrite(LPWMPIN, 255);
   digitalWrite(LIN1PIN, 1);
   digitalWrite(LIN2PIN, 0);
  
   analogWrite(RPWMPIN, 255);
   digitalWrite(RIN1PIN, 1);
   digitalWrite(RIN2PIN, 0);
   delay(2000);
   stop();
   while(1);
  
}

void stop() {
  digitalWrite(LPWMPIN, 0);
   digitalWrite(LIN1PIN, 0);
   digitalWrite(LIN2PIN, 0);
   digitalWrite(RPWMPIN, 0);
   digitalWrite(RIN1PIN, 0);
   digitalWrite(RIN2PIN, 0);
}
