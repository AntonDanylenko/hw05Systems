all: main.o strfunc.o strfunc.h
	gcc main.o strfunc.o

strfunc.o: strfunc.c strfunc.h
	gcc -c strfunc.c

main.o: main.c strfunc.h
	gcc -c main.c

run:
	./a.out

clean:
	rm *.o
