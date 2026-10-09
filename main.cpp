#include <NewPing.h>

#define led 18
#define TRIGGER_PIN  19
#define ECHO_PIN     21
#define MAX_DISTANCE 500

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

void setup() {
  Serial.begin(115200);
  pinMode(18, OUTPUT);
}

void loop() {
  Serial.print("Ping: ");                                 
  Serial.print(sonar.ping_cm());
  Serial.println("cm");

  if (sonar.ping_cm() < 40) {
    digitalWrite(led, true);
  } else {
    digitalWrite(led, false);
  }
}
