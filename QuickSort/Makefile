CC=g++
FLAG=-O3
OBJS=main.o

all:Qsort

Qsort: main.o
	$(CC) -o qsortdemo main.o

main.o: main.cpp
	$(CC) $(FLAG) -c main.cpp

clean:
	rm -rf *.o
	rm -rf qsortdemo



