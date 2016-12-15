CC=gcc
CFLAGS=-Wall -g -std=c11
DEPS = quickselect.h
OBJ = quickselect.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS) -lm

qselect: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) -lm
