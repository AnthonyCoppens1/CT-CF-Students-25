int buzzer = 4;  // Buzzer pin

// Note frequencies
#define C5s 554
#define B4  494
#define A4  440
#define F4s 370

// Note durations (milliseconds)
int beat = 400;

void setup() {
  // Melody: "you used to call me on my cell phone"
  int melody[] = {C5s, B4, A4, F4s, B4, C5s, B4, A4};
  int noteDurations[] = {beat, beat, beat, beat, beat, beat, beat, beat};

  for (int i = 0; i < 8; i++) {
    tone(buzzer, melody[i], noteDurations[i]);
    delay(noteDurations[i] * 1.3);  // Slight pause between notes
  }

  noTone(buzzer);  // Stop playing
}

void loop() {
  // Repeat melody
  setup();
}
