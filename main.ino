#define PIN_LED 10
#define PIN_PH A0

void setup() {
  Serial.begin(9600);
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  int val = analogRead(PIN_PH);
  Serial.println(val);
  if (val < 180) {
    digitalWrite(PIN_LED, LOW);
   }  
   if (val>230) {
    digitalWrite(PIN_LED, HIGH);
    }

}
