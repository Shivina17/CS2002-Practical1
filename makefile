code1.o: recursive_fib.c
	gcc recursive_fib.c -c  -o code1.o

code2.o: print_fib.c fib.h
	gcc print_fib.c -c -o code2.o

code3.o: iterative_fib.c
	gcc iterative_fib.c -c -o code3.o

code4.o: second_main.c fib.h
	gcc second_main.c -c -o code4.o

code5.o: personalised_fib.c
	gcc personalised_fib.c -c -o code5.o

stage1: code1.o code2.o
	gcc code1.o code2.o -o stage1 -Wall -Wextra -g

stage2: code2.o code3.o
	gcc code2.o code3.o -o stage2 -Wall -Wextra -g

stage3: code4.o code5.o
	gcc code4.o code5.o -o stage3 -Wall -Wextra -g

clean :
	rm *.o stage1 stage2 stage3