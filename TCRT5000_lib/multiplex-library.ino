int sensor_value_analog[8];
int sensor_value_digital[8];
int HT = 1019;
int LT = 40;
#include "tcrt5000.h"
void setup() {
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);


}

void loop() {
read_Sensor();
}
