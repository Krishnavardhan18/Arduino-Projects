//define BLYNK PRINT 9prial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "3B7DhkPL4f_EI368qFnmmytxFETjLuez";
// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Krishna Vardhan";
char pass[] = "endiraneebaadha";


void setup()
{

  // Debug console
 Serial.begin(115200);
 Serial.println(digitalRead(D0));
 pinMode(D1,OUTPUT);
 digitalWrite(D1,HIGH);
 Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, said, pass, "blynk-cloud.com", 8442);
  //Blynk.begin(auth, said, pass, IPAddress(192,168,1,100), 8442);

}
void loop()
{

if( digitalRead(D0) == HIGH)
 {
 Blynk.email("ckrishnakittu@gmail.com", "Moisture Attention!!!", "crop moisture is becoming LOW!! and Please take the necessary action as soon as possible THANKS "); 
 Blynk.notify("Moisture Attention!!! - crop moisture is becoming LOW!! ");
 // Setting the button
 // pinHode(2, INPUTJULLUP);
 // Attach pin 2 interrupt to our handler
 // attachlnterrupt(digitalPintolnterrupt(2), emailOnButtonPress, CHANGE);
 }
 digitalRead(D0)== LOW; 
 Blynk.run();
}
