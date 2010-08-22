#Makefile where everything is stored in one directory
EXECUTABLE=APConsoleLibDemo
CC=gcc
CFLAGS=-c -g -Wall -ansi -pedantic
LDFLAGS=
SOURCES=$(wildcard *.c)
OBJECTS=$(SOURCES:.c=.o)

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

clean:
	rm -rf *.o $(EXECUTABLE)
