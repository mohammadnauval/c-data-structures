CC=gcc
CFLAGS=-c -Wall -Wextra
DEPS=linkedlist.h
TARGET=main
OBJ=main.o linkedlist.o

all: ${TARGET}

main: ${OBJ}
	${CC} -o $@ $^

%.o: %.c ${DEPS}
	${CC} ${CFLAGS} -o $@ $<

clean:
	rm -rf *.o testfa 
