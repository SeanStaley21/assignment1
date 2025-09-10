CC = gcc
CFLAGS = -Wall -Wextra -std=c99

SRC = name.c name_reverse.c name_length.c
OBJ = $(SRC:.c=.o)

all: main.exe

main.exe: $(OBJ)
	$(CC) $(CFLAGS) -o main.exe $(OBJ)

name.o: name.c name_reverse.h name_length.h
name_reverse.o: name_reverse.c name_reverse.h
name_length.o: name_length.c name_length.h

clean:
	del *.o main.exe
