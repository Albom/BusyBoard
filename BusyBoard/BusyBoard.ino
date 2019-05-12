
#include <Keypad.h>
#include "melodies.h"

int buzzerPin = P2_3;
int bellPin = P1_7;

byte rowPins[] = { P1_4, P1_5, P2_0, P2_1 };
byte colPins[] = { P1_0, P1_1, P1_2, P1_3 };

const PROGMEM char keys[4][4] = {
  {'1', '4', '7', '*'},
  {'2', '5', '8', '0'},
  {'3', '6', '9', '#'},
  {'A', 'B', 'C', 'D'}
};

void play(const char melody[]) {
  int i = 0;
  while (melody[i]) {
    int noteDuration = 1000 / melody[i + 1];
    if (melody[i] > 0) {
      tone(buzzerPin, NOTES[melody[i] - 1], noteDuration);
      delay(noteDuration);
      noTone(buzzerPin);
    } else {
      delay(noteDuration);
    }
    i += 2;
  }
}


Keypad kpd = Keypad(makeKeymap(keys), rowPins, colPins, 4, 4);

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(bellPin, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(bellPin) == LOW) {
    play(bell);
  }

  char key = kpd.getKey();
  if (key) {
    switch (key)
    {
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
        if (key == '0') {
          key += 10;
        }
        for (int i = 0; i < key - '0'; i++) {
          int noteDuration = 1000 / 2;
          tone(buzzerPin, scale[i], noteDuration);
          delay(noteDuration);
          noTone(buzzerPin);
        }
        break;
      case 'A':
        play(friendship);
        break;
      case 'B':
        play(mamont);
        break;
      case 'C':
        play(oldMcDonald);
        break;
      case 'D':
        play(snegurochka);
        break;
      case '#':
        play(wheels);
        break;
      case '*':
        play(cherry);
        break;
    }
  }

}
