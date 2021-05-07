#define trigger D0
#define echo D1
#define BLYNK_PRINT Serial  
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "Fip86QXbYsngp4-iu_UwZ8pyVKGDonlG";
char ssid[] = "Krishna Vardhan";
char pass[] = "endiraneebaadha";

void setup() 
{
  Serial.begin (9600);
  Blynk.begin(auth, ssid, pass);
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
}
void loop()
{
  
  long duration, distance;
  digitalWrite(trigger, LOW);  
  delayMicroseconds(2); 
  
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10); 
  
  digitalWrite(trigger, LOW);
  duration = pulseIn(echo, HIGH);
  distance = (duration/2) / 29.1;
  if (distance <= 10) {
    Blynk.virtualWrite(V0, 255);
}
  else {
    Blynk.virtualWrite(V0, 0);
  }

 if (distance <= 6) {
    Blynk.virtualWrite(V1, 255);
}
  else {
    Blynk.virtualWrite(V1, 0);
  }

   if (distance <=3) {
    Blynk.virtualWrite(V2, 255);
}
  else {
    Blynk.virtualWrite(V2, 0);
  }
Blynk.run();
}
