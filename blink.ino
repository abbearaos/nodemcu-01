// Blinkprogram för NodeMCU
// En röd lampa på D1 tänds och släcks varje halv sekund.

// setup() görs EN gång, när kortet startar
void setup() {
  pinMode(D1, OUTPUT);     // D1 ska skicka ut ström
  Serial.begin(115200);    // kortet får prata med datorn
}

// loop() görs OM OCH OM IGEN
void loop() {
  digitalWrite(D1, HIGH);        // ström PÅ  -> lampan tänds
  Serial.println("Lampa på");    // skriv till datorn
  delay(500);                    // vänta en halv sekund

  digitalWrite(D1, LOW);         // ström AV  -> lampan släcks
  Serial.println("Lampa av");    // skriv till datorn
  delay(500);                    // vänta en halv sekund
}
