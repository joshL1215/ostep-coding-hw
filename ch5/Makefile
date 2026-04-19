CC = gcc
CFLAGS = -Wall -g
TARGETS = basic_fork file_desc_fork without_wait with_wait exec with_waitpid close_stdout pipe

all: $(TARGETS)

basic_fork: basic_fork.o
	$(CC) $(CFLAGS) -o $@ $^

file_desc_fork: file_desc_fork.o
	$(CC) $(CFLAGS) -o $@ $^

without_wait: without_wait.o
	$(CC) $(CFLAGS) -o $@ $^

exec: exec.o
	$(CC) $(CFLAGS) -o $@ $^

with_wait: with_wait.o
	$(CC) $(CFLAGS) -o $@ $^

with_waitpid: with_waitpid.o
	$(CC) $(CFLAGS) -o $@ $^

close_stdout: close_stdout.o
	$(CC) $(CFLAGS) -o $@ $^

pipe: pipe.o
	$(CC) $(CFLAGS) -o $@ $^

clean: 
	rm -f *.o $(TARGETS)
