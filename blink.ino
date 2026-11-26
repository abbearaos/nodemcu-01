// Blinkprogram för NodeMCU (ESP8266)
// En röd LED på D1 tänds och släcks varje halv sekund.

const int LED = D1;    // pinnen där LED:n sitter
const int TID = 500;   // hur länge, i millisekunder (500 = en halv sekund)

// setup() körs EN gång när kortet startar
void setup() {
  pinMode(LED, OUTPUT);   // D1 ska skicka ut ström
  Serial.begin(115200);   // starta kontakten med datorn
}

// loop() körs om och om igen
void loop() {
  digitalWrite(LED, HIGH);      // ström på = LED tänds
  Serial.println("Lampa på");
  delay(TID);                   // vänta

  digitalWrite(LED, LOW);       // ström av = LED släcks
  Serial.println("Lampa av");
  delay(TID);                   // vänta
}
