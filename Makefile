all: main.c ptb2.c tachbit.c hoanvi.c
	gcc -o main main.c ptb2.c tachbit.c hoanvi.c -lm -I.
ptb2: main.c ptb2.c
	gcc -o main main.c ptb2.c -lm -I.
tachbit: main.c tachbit.c
	gcc -o main main.c tachbit.c -lm -I.
hoanvi: main.c hoanvi.c
	gcc -o main main.c hoanvi.c -lm -I.
clean: 
	rm -rf *o main