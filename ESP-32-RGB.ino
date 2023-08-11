/*
 * This ESP32 code is created by esp32io.com
 *
 * This ESP32 code is released in the public domain
 *
 * For more detail (instruction and wiring diagram), visit https://esp32io.com/tutorials/esp32-rgb-led
 */

#define PIN_RED    23 // GPIO23
#define PIN_GREEN  22 // GPIO22
#define PIN_BLUE   21 // GPIO21

void setup() {
  pinMode(PIN_RED,   OUTPUT);
  pinMode(PIN_GREEN, OUTPUT);
  pinMode(PIN_BLUE,  OUTPUT);
}

void loop() {
  // color code #00C9CC (R = 0,   G = 201, B = 204)
  analogWrite(PIN_RED,   15);
  analogWrite(PIN_GREEN, 220);
  analogWrite(PIN_BLUE,  20);

  delay(100); // keep the color 1 second

  // color code #F7788A (R = 247, G = 120, B = 138)
  analogWrite(PIN_RED,   235);
  analogWrite(PIN_GREEN, 10);
  analogWrite(PIN_BLUE,  10);

  delay(100); // keep the color 1 second

  // color code #34A853 (R = 52,  G = 168, B = 83)
  analogWrite(PIN_RED,   20);
  analogWrite(PIN_GREEN, 15);
  analogWrite(PIN_BLUE,  220);

  delay(100); // keep the color 1 second
}
