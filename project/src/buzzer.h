#ifndef buzzer_included
#define buzzer_included

#define numerator 2000000
#define D_5 587.330
#define D_4 293.66
#define D_sharp_4 311.13
#define A_4 440.00
#define A_3 220.00
#define A_sharp_3 233.08
#define G_5 783.991
#define G_sharp_4 415.30
#define G_4 392.00
#define G_3 196.00
#define Eb_5 622.25
#define F_5 698.46
#define F_4 349.23
#define F_sharp_4 369.99
#define F_3 174.61
#define C_5 523.251
#define C_sharp_5 554.37
#define C_sharp_4 277.18
#define C_4 261.63
#define Ab_5 830.61
#define Bb_5 932.33
#define B_3 246.94
#define C_6 1046.50
  
void buzzer_init();
void buzzer_set_period(short cycles);
void buzzerOff();
void tetris();
void megalovania();

#endif // included
