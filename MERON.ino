
//
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "7c6c6d8f2ec34d58a45bb1f3225eff4c";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "meron";
char pass[] = "12345678";

void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}
