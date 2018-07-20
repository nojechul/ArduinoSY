#include <SoftwareSerial.h>

SoftwareSerial HM10(3,4); // RX, TX

char recv_str[100];

void setup() {
  Serial.begin(9600);
  HM10.begin(9600);
}
void loop() {
  HM10.print("ACK");

}
