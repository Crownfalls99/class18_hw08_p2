all : numbers

max.o : max.c
	gcc -c -o max.o max.c

min.o : min.c
	gcc -c -o min.o min.c

main.o : main.c numbers.h
	gcc -c -o main.o main.c

numbers : max.o min.o main.o
	gcc -o numbers max.o min.o main.o

clean :
	rm -f *.o numbers


