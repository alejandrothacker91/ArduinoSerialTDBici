/*
  Rotary Encoder - Polling Example

  The circuit:
  encoder pin A to Arduino pin 2
  encoder pin B to Arduino pin 3
  encoder ground pin to ground (GND)
*/

#include <MD_REncoder.h>

// set up encoder object
MD_REncoder R = MD_REncoder(2,3);

void setup()
{
  Serial.begin(9600);
  R.begin();
}

void loop()
{
  uint8_t dir = R.read();

  //int fast = R.speed();
  if (dir) {
    int fast = R.speed();
    //delay(1);


    Serial.print("direction/");
    Serial.print(dir, DEC);

    Serial.print("/speed/");
    Serial.print(fast, DEC);

    Serial.print('\n');
  }

  delay(1);
}
