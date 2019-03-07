game:	game.o
	gcc game.o -o game
game.o: game.c domino.h
	gcc -c game.c
clean:
	rm *.o
