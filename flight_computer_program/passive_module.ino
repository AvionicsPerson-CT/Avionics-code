/*
 * Buzzer Module
 * NOTE: has a call to delay(500), THEREFORE ONLY USE THIS IN
 * groundIdle and landSafe states to not have delay issues
 * 
 * Inputs: 
 * - Positive
 * - Negative
 * 
 * Outputs:
 * - Buzzer Noise
 * 
 * Set Up Instructions:
 * 1. Connect positive to D8 (CONNECT TO PIN 41 ON TEENSY 4.1)
 * 2. Connect negative to GND
 * 
 * Functions:
 * buzzerOn(): turns the buzzer on
 * 
 */
 
#include "pitches.h"

/*void setup() {
 
}*/

void buzzerOn() {
  // notes in the melody:
  int melody[] = {NOTE_CS5, NOTE_DS5, NOTE_FS5};
  // 500 milisecond
  int duration = 500;
  // We only use melody[1] here to not have too long of a delay
  // pin8 output the voice, every scale is 0.5 sencond
  tone(14, melody[1], duration);
  //delay(500);
}
 
/*void loop() {
  buzzerOn();
}*/
