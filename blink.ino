// Blinkprogram för NodeMCU
// Lampan på D1 tänds och släcks varannan halvsekund.

void setup() {
  pinMode(D1, OUTPUT);     // D1 ska skicka ut ström
  Serial.begin(115200);    // så att kortet kan skriva till datorn
}

void loop() {
  digitalWrite(D1, HIGH);        // ström på, lampan tänds
  Serial.println("Lampa på");
  delay(500);                    // vänta 0,5 sekunder

  digitalWrite(D1, LOW);         // ström av, lampan släcks
  Serial.println("Lampa av");
  delay(500);                    // vänta 0,5 sekunder
}
