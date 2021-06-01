/* Encoder Library - Basic Example
   http://www.pjrc.com/teensy/td_libs_Encoder.html

   This example code is in the public domain.
*/

#include <Encoder.h>

// Change these two numbers to the pins connected to your encoder.
//   Best Performance: both pins have interrupt capability
//   Good Performance: only the first pin has interrupt capability
//   Low Performance:  neither pin has interrupt capability
Encoder myEnc(3, 2);
//   avoid using pins with LEDs attached

void setup() {
  Serial.begin(9600);
  /*
    Serial.print("direction/");
    Serial.print(0, DEC);

    Serial.print("/speed/");
    Serial.print(0, DEC);

    Serial.print('\n');
  */
}

long oldPosition  = -999;

void loop() {
  long newPosition = myEnc.read();
  if (newPosition != oldPosition) {
    oldPosition = newPosition;
    //Serial.println(newPosition);

    Serial.print("idle/");
    Serial.print(0, DEC);

    Serial.print("/position/");
    Serial.print(newPosition, DEC);

    Serial.print('\n');

  } else {
    delay(1000);
    Serial.print("idle/");
    Serial.print(1, DEC);

    Serial.print("/position/");
    Serial.print(newPosition, DEC);

    Serial.print('\n');

  }
}
