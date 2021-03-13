major1: major1.o palindrome.o reverse.o replace.o power.o
	gcc -o major1 palindrome.c major1.c reverse.c replace.c power.c -lm

major1.o: major1.h major1.c
	gcc -c major1.c

palindrome.o: major1.h palindrome.c
	gcc -c palindrome.c

reverse.o: major1.h reverse.c
	gcc -c reverse.c

power.o: major1.h power.c
	gcc -c power.c

replace.o: major1.h replace.c
	gcc -c replace.c -lm

clean:
	rm *.o
	rm major1

run:
	./major1
