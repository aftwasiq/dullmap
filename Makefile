CC=gcc
CFLAGS=-I.
DEPS = dullmap.h
OBJ = dullmap.o dullmap.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

dullmapmake: $(OBJ)
