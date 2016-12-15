CC=g++
CFLAGS=-W -Wall -g

all: main.o multiply.o core.o
	$(CC) $(CFLAGS) main.o multiply.o core.o -o quiz

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

multiply.o: multiply.cpp multiply.h
	$(CC) $(CFLAGS) -c multiply.cpp

core.o: core.cpp core.h
	$(CC) $(CFLAGS) -c core.cpp

clean:
	rm *.o quiz
