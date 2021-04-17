//merah pin servo vu
//coklat pin servo ground
//orange pin D4

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

Servo servo;

char auth[] = "5Yb8O-WtvV7hKf1jHrTdeH_jG_yDFdiB"; //  token dari blynk 
char ssid[] = "sayabulu";  // ssid wifi
char pass[] = "auto_bot"; // password wifi

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);

  servo.attach(2); // NodeMCU D4 pin
  
 }
  
void loop()
{
  
  Blynk.run();
  
}
BLYNK_WRITE(V1)
{
   servo.write(param.asInt());
}
