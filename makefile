all: mystr.o main.o
	gcc -o "mystr" mystr.o main.o

mystr.o: mystr.c mystr_headers.h
	gcc -c mystr.c

main.o: main.c mystr_headers.h
	gcc -c main.c

run: mystr
	./mystr

clean:
	rm *.o
	rm mystr
