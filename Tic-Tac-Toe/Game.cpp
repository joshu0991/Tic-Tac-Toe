/*
 * Game.cpp
 *
 *  Created on: May 13, 2014
 *      Author: josh
 */

#include "Tic_Tac_Toe.h"


int main()
{
	int turn = 1;
	int row;
	int col;
	char letter = 'X';
	bool check = false;
	Tic_Tac_Toe t;
while(t.decide_winner(turn, letter) == false)
{
	letter = t.decide_let(turn);
	do{
	row = t.get_row();
	col = t.get_col();
	check = t.in_array(row, col, turn);
	}while(check == true);
	t.set_char(letter, row, col);
	t.print_board();
	turn++;
	}
}
