CC=g++
CFLAGS=-O3
OBJS=main.o

all:Linkedlist

Linkedlist: main.o
	$(CC) -o linkeddemo main.o

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

clean:
	rm -rf *.o
	rm -rf linkeddemo
