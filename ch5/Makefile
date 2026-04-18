CC = gcc
CFLAGS = -Wall -g
TARGETS = basic_fork file_desc_fork

all: $(TARGETS)

basic_fork: basic_fork.o
	$(CC) $(CFLAGS) -o $@ $^

file_desc_fork: file_desc_fork.o
	$(CC) $(CFLAGS) -o $@ $^

clean: 
	rm -f *.o $(TARGETS)
