#variables
CC=g++
CFLAGS=-c -Wall

a4q3: textprocess.o echo.o allcaps.o dropfirst.o count.o doublewords.o main.o
	$(CC) textprocess.o echo.o allcaps.o dropfirst.o count.o doublewords.o main.o -o a4q3

textprocess.o: textprocess.cc
	$(CC) $(CFLAGS) textprocess.cc

echo.o: echo.cc
	$(CC) $(CFLAGS) echo.cc

allcaps.o: allcaps.cc
	$(CC) $(CFLAGS) allcaps.cc

dropfirst.o: dropfirst.cc
	$(CC) $(CFLAGS) dropfirst.cc

count.o: count.cc
	$(CC) $(CFLAGS) count.cc

doublewords.o: doublewords.cc
	$(CC) $(CFLAGS) doublewords.cc

main.o: main.cc
	$(CC) $(CFLAGS) main.cc
