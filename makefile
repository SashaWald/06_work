
all: switcheroo.o
	gcc -o switcheroo switcheroo.o

switcheroo.o :
	gcc -c switcheroo.c

run:
	./switcheroo