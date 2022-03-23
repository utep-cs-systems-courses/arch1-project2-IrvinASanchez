#include <msp430.h>
#include "libTimer.h"
#include "buzzer.h"
#include "led.h"

void buzzer_init()
{
    timerAUpmode();
    P2SEL2 &= ~(BIT6 | BIT7);
    P2SEL &= ~BIT7; 
    P2SEL |= BIT6;
    P2DIR = BIT6;		
}

void buzzer_set_period(short cycles) 
{
  CCR0 = cycles; 
  CCR1 = cycles >> 1;		
}

void buzzerOff() {
  buzzer_set_period(0);
}

static int song_one_count = 0;
void tetris() {                   //  Tetris theme
   song_one_count ++;
   
   if (song_one_count == 100) // G quarter
     buzzer_set_period(numerator/G_5); 
   if (song_one_count == 200) // D quarter
     buzzer_set_period(numerator/D_5); 
   if (song_one_count == 300) // Eb eighth
     buzzer_set_period(numerator/Eb_5);   
   if (song_one_count == 350) // F quarter
     buzzer_set_period(numerator/F_5); 
   if (song_one_count == 450) // Eb eight
     buzzer_set_period(numerator/Eb_5); 
   if (song_one_count == 500) // D quarter 
     buzzer_set_period(numerator/D_5); 
   if (song_one_count == 600) // C quarter
     buzzer_set_period(numerator/C_5);
   if (song_one_count == 690) // off
     buzzer_set_period(0);
   if (song_one_count == 700) // C quarter
     buzzer_set_period(numerator/C_5);
   if (song_one_count == 800) // Eb eighth
     buzzer_set_period(numerator/Eb_5); 
   if (song_one_count == 850) // G quarter
     buzzer_set_period(numerator/G_5); 
   if (song_one_count == 950) // F quarter
     buzzer_set_period(numerator/F_5); 
   if (song_one_count == 1050) // Eb eighth
     buzzer_set_period(numerator/Eb_5); 
   if (song_one_count == 1100) // D quarter
     buzzer_set_period(numerator/D_5); 
   if (song_one_count == 1200) // Eb eighth
     buzzer_set_period(numerator/Eb_5); 
   if (song_one_count == 1250) // F quarter
     buzzer_set_period(numerator/F_5);
   if (song_one_count == 1350) // G quarter
     buzzer_set_period(numerator/G_5);
   if (song_one_count == 1450) // Eb eighth 
     buzzer_set_period(numerator/Eb_5);
   if (song_one_count == 1500) // C quarter
     buzzer_set_period(numerator/C_5);
   if (song_one_count == 1590) // off
     buzzer_set_period(0);
   if (song_one_count == 1600) // C quarter
     buzzer_set_period(numerator/C_5);
   if (song_one_count == 1700) // quarter rest 
     buzzer_set_period(0);
   if (song_one_count == 1800) // eight rest
     buzzer_set_period(0);
   if (song_one_count == 1850) // F quarter
     buzzer_set_period(numerator/F_5);
   if (song_one_count == 1950) // Ab eight
     buzzer_set_period(numerator/Ab_5);
   if (song_one_count == 2000) // chigh quarter
     buzzer_set_period(numerator/C_6);
   if (song_one_count == 2100) // Bb eighth
     buzzer_set_period(numerator/Bb_5);
   if (song_one_count == 2150) // Ab eighth
     buzzer_set_period(numerator/Ab_5);
   if (song_one_count == 2200) // G quarter
     buzzer_set_period(numerator/G_5);
   if (song_one_count == 2300) // Eb eighth
     buzzer_set_period(numerator/Eb_5);
   if (song_one_count == 2350) // G quarter
     buzzer_set_period(numerator/G_5);
   if (song_one_count == 2450) // F quarter
     buzzer_set_period(numerator/F_5);
   if (song_one_count == 2550) // Eb eighth
     buzzer_set_period(numerator/Eb_5);
   if (song_one_count == 2600) // D quarter
     buzzer_set_period(numerator/D_5);
   if (song_one_count == 2690) // off
     buzzer_set_period(0);
   if (song_one_count == 2700) // D quarter
     buzzer_set_period(numerator/D_5);
   if (song_one_count == 2800) // Eb eighth
     buzzer_set_period(numerator/Eb_5);
   if (song_one_count == 2850) // F quarter
     buzzer_set_period(numerator/F_5);
   if (song_one_count == 2950) // G quarter
     buzzer_set_period(numerator/G_5);
   if (song_one_count == 3050) // Eb eighth
     buzzer_set_period(numerator/Eb_5);
   if (song_one_count == 3100) // C quarter
     buzzer_set_period(numerator/C_5);
   if (song_one_count == 3190) // off
     buzzer_set_period(0);
   if (song_one_count == 3200) // C quarter
     buzzer_set_period(numerator/C_5);
   if (song_one_count >= 3300){ // off
     buzzer_set_period(0);
     song_one_count = 0;
   }
}

static int song_two_count = 0;
void megalovania() {                  // Megalovania from undertale with lights
  song_two_count ++;

  if (song_two_count == 125) { // D_4 
    buzzer_set_period(numerator/D_4);
    greenControl(1);
    redControl(0);
  }
  if (song_two_count == 145) { // off
    buzzer_set_period(0);
    greenControl(0);
    redControl(0);
  }
  if (song_two_count == 155) { // D_4
    buzzer_set_period(numerator/D_4);
    greenControl(1);
    redControl(0);
  }
  if (song_two_count == 185) { // D_5
    buzzer_set_period(numerator/D_5);
    greenControl(1);
    redControl(1);
  }
  if (song_two_count == 245) { // A_4
    buzzer_set_period(numerator/A_4);
    greenControl(1);
    redControl(0);
  }
  if (song_two_count == 295) { // off
    buzzer_set_period(0);
    greenControl(0);
    redControl(0);
  }
  if (song_two_count == 305) { // G_sharp_4
    buzzer_set_period(numerator/G_sharp_4);
    greenControl(0);
    redControl(1);
  }
  if (song_two_count == 365) { // G_4
    buzzer_set_period(numerator/G_4);
    greenControl(1);
    redControl(0);
  }
  if (song_two_count == 425) { // F_4
    buzzer_set_period(numerator/F_4);
    greenControl(0);
    redControl(1);
  }
  if (song_two_count == 485) { // D_4
    buzzer_set_period(numerator/D_4);
    greenControl(1);
    redControl(0);
  }
  if (song_two_count == 515) { // F_4
    buzzer_set_period(numerator/F_4);
    greenControl(0);
    redControl(1);
  }
  if (song_two_count == 545) { // G_4
    buzzer_set_period(numerator/G_4);
    greenControl(1);
    redControl(0);
  }
  if (song_two_count == 575) { // C_4
    buzzer_set_period(numerator/C_4);
    greenControl(0);
    redControl(1);
  }
  if (song_two_count == 595) { // off
    buzzer_set_period(0);
    greenControl(0);
    redControl(0);
  }
  if (song_two_count == 605) { // C_4
    buzzer_set_period(numerator/C_4);
    greenControl(0);
    redControl(1);
  }
  if (song_two_count == 635) { // D_5
    buzzer_set_period(numerator/D_5);
    greenControl(1);
    redControl(1);
  }
  if (song_two_count == 695) { // A_4
    buzzer_set_period(numerator/A_4);
    greenControl(0);
    redControl(1);
  }
  if (song_two_count == 745) { // off
    buzzer_set_period(0);
    greenControl(0);
    redControl(0);
  }
  if (song_two_count == 755) { // G_sharp_4
    buzzer_set_period(numerator/G_sharp_4);
    greenControl(1);
    redControl(0);
  }
  if (song_two_count == 815) { // G_4
    buzzer_set_period(numerator/G_4);
    greenControl(0);
    redControl(1);
  }
  if (song_two_count == 875) { // F_4
    buzzer_set_period(numerator/F_4);
    greenControl(1);
    redControl(0);
  }
  if (song_two_count == 935) { // D_4
    buzzer_set_period(numerator/D_4);
    greenControl(0);
    redControl(1);
  }
  if (song_two_count == 965) { // F_4
    buzzer_set_period(numerator/F_4);
    greenControl(1);
    redControl(0);
  }
  if (song_two_count == 995) { // G_4
    buzzer_set_period(numerator/G_4);
    greenControl(0);
    redControl(1);
  }
  if (song_two_count == 1025) { // B_3
    buzzer_set_period(numerator/B_3);
    greenControl(1);
    redControl(0);
  }
  if (song_two_count == 1045) { // off
    buzzer_set_period(0);
    greenControl(0);
    redControl(0);
  }
  if (song_two_count == 1055) { // B_3
    buzzer_set_period(numerator/B_3);
    greenControl(1);
    redControl(0);
  }
  if (song_two_count == 1085) { // D_5
    buzzer_set_period(numerator/D_5);
    greenControl(1);
    redControl(1);
  }
  if (song_two_count == 1145) { // A_4
    buzzer_set_period(numerator/A_4);
    greenControl(0);
    redControl(1);
  }
  if (song_two_count == 1195) { // off
    buzzer_set_period(0);
    greenControl(0);
    redControl(0);
  }
  if (song_two_count == 1205) { // G_sharp_4
    buzzer_set_period(numerator/G_sharp_4);
    greenControl(1);
    redControl(0);
  }
  if (song_two_count == 1265) { // G_4
    buzzer_set_period(numerator/G_4);
    greenControl(0);
    redControl(1);
  }
  if (song_two_count == 1325) { // F_4
    buzzer_set_period(numerator/F_4);
    greenControl(1);
    redControl(0);
  }
  if (song_two_count == 1385) { // D_4
    buzzer_set_period(numerator/D_4);
    greenControl(0);
    redControl(1);
  }
  if (song_two_count == 1415) { // F_4
    buzzer_set_period(numerator/F_4);
    greenControl(1);
    redControl(0);
  }
  if (song_two_count == 1445) { // G_4
    buzzer_set_period(numerator/G_4);
    greenControl(0);
    redControl(1);
  }
  if (song_two_count == 1475) { // A_sharp_3
    buzzer_set_period(numerator/A_sharp_3);
    greenControl(1);
    redControl(0);
  }
  if (song_two_count == 1495) { // off
    buzzer_set_period(0);
    greenControl(0);
    redControl(0);
  }
  if (song_two_count == 1505) { // A_sharp_3
    buzzer_set_period(numerator/A_sharp_3);
    greenControl(1);
    redControl(0);
  }
  if (song_two_count == 1535) { // D_5
    buzzer_set_period(numerator/D_5);
    greenControl(1);
    redControl(1);
  }
  if (song_two_count >= 1595) { // off
    buzzer_set_period(0);
    greenControl(0);
    redControl(0);
    song_two_count = 0;
  }
}
