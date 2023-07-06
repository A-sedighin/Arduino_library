#include "tcrt5000.h" 

int sensor_value_analog[8];
int sensor_value_digital[8];
int HT = 900;
int LT = 300;

void read_Sensor() {
  for ( int i = 0; i < 8; i++) {
    digitalWrite(10, i % 2);
    digitalWrite(11, int(i / 2) % 2);
    digitalWrite(12, i / 4);
    sensor_value_analog[i] = analogRead(A0);

  }
  for (int i = 0; i < 8; i++) {
    int T = (HT + LT) / 2;
    if (sensor_value_analog[i] > T) {
      sensor_value_digital[i] = 1;
    } else {
      sensor_value_digital[i] = 0;
    }
  }
  for (int i = 0; i < 8 ; i++){
       Serial.print(sensor_value_analog[i]);
       Serial.print("|");
       Serial.print(sensor_value_digital[i]);
       Serial.print("\t");
}
Serial.println();
}
