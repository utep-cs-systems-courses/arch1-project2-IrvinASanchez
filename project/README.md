Project 2: Toy-Buzzer
=============================================================================
This program uses interrupts and state machines to do a combinations of
light sequences and buzzer noises for all 4 buttons on and msp-430.

## How to Run Toy-Buzzer:
=============================================================================
1. While in the project directory, enter "make" to compile all the necessary
   files.
2. After compilation, move into the src directory and enter "make load" to
   load the program into your msp-430.
3. When finished, you can move back to the project directory and enter
   "make clean" to delete all the generated files.

## User Command Instructions:
=============================================================================
* Button 1: Pressing this button will make the red and green leds blink and
  dim at alternating intevals.
* Button 2: Pressing this button will make the red led toggle on and off
  every second.
* Button 3: Pressing this button will play the Tetris theme song on repeat.
* Button 4: Pressing this button will play Megalovania from undertale and
  alternate leds on every note.