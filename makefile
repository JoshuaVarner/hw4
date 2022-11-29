hw4: main.c mylib.c
	gcc main.c mylib.c -o hw4 -g -O0 -Wall -std=gnu99 -save-temps
clean:
	rm main.i main.s main.o mylib.i mylib.s mylib.o
