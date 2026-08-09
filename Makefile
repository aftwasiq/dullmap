CC=gcc
CFLAGS=-I.
LDLIBS=-lncurses
DEPS = dullmap.h
OBJ = dullmap.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

dullmap: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LDLIBS)

clean:
	rm -f *.o dullmap
