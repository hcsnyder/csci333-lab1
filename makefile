CC = g++

CFLAGS = -Wall -Wextra -Werror -Weffc++ -pedantic

all: clean hello

hello: hello.cpp
	$(CC) $(CFLAGS) -o hello hello.cpp

clean:
	rm -f *~
	rm -f hello
