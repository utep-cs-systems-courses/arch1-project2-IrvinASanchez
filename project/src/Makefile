# makfile configuration
COMMON_OBJECTS  = main.o buzzer.o switches.o led.o led-sequences.o interruptHandler.o
CPU             = msp430g2553
CFLAGS          = -mmcu=${CPU} -I../h
LDFLAGS		= -L/opt/ti/msp430_gcc/include 

#switch the compiler (for the internal make rules)
CC              = msp430-elf-gcc
AS              = msp430-elf-as

all: runToy.elf

#additional rules for files
runToy.elf: ${COMMON_OBJECTS} oncePerSecond.o
	${CC} ${CFLAGS} ${LDFLAGS} -o $@ $^ ../lib/libTimer.a

load: runToy.elf
	msp430loader.sh $^

clean:
	rm -f *.o *.elf

led.o: led.h

buzzer.o: led.h buzzer.h

switches.o: led.h switches.h

oncePerSecond.o: led-sequences.h

interruptHandler.o: led.h switches.h led-sequences.h buzzer.h

led-sequences.o: led.h led-sequences.h
