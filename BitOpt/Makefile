CC = g++
FLAG = -O3

all: main.o
	$(CC) -o bitopt main.o
main.o:
	$(CC) $(FLAG) -c main.cpp
clean:
	rm -rf *.o
	rm -rf bitopt
