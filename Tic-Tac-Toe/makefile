all: Game

Game: Game.o Computer.o Tic_Tac_Toe.o
	g++ Computer.o Tic_Tac_Toe.o Game.o -o Game
Computer.o: Game.cpp
	g++ -c Computer.cpp
Tic_Tac_Toe.o: Tic_Tac_Toe.cpp
	g++ -c Tic_Tac_Toe.cpp
Game.o: Game.cpp
	g++ -c Game.cpp
clean:
	rm -rf *o Game

