/*
 * Tic_Tac_Toe.cpp
 *
 *  Created on: May 13, 2014
 *      Author: josh
 */
#include "Tic_Tac_Toe.h"

int Tic_Tac_Toe::get_row(void)
{
	int ret_var = 1;
	while(true){
	std::cout << "Enter the row (1-3)";
	std::cin >> ret_var;
	if (ret_var > 3 || ret_var <= 0)
	{
		continue;
	}else{
		break;
	}
	}
	return ret_var;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

int Tic_Tac_Toe::get_col(void)
{
	int ret_var = 1;
	while(true){
	std::cout << "Enter the column (1-3)";
	std::cin >> ret_var;
	if (ret_var > 3 || ret_var <= 0)
	{
		continue;
	}else{
		break;
	}
	}
	return ret_var;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

void Tic_Tac_Toe::set_char(char let, int row, int col)
{
	switch(row)
	{
	case 1:
	{
		switch(col)
		{
		case 1:
			aa[3] = let;
		break;
		case 2:
			aa[11] = let;
		break;
		case 3:
			aa[19] = let;
		}
	}
	break;
	case 2:
	{
		switch(col)
		{
		case 1:
			bbb[3] = let;
		break;
		case 2:
			bbb[11] = let;
		break;
		case 3:
			bbb[19] = let;
		}
	}
	break;
	case 3:
	{
		switch(col)
		{
		case 1:
			cc[3] = let;
		break;
		case 2:
			cc[11] = let;
		break;
		case 3:
			cc[19] = let;
		}
	}
	break;
	}
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

void Tic_Tac_Toe::print_board()
{
	std::cout << a_n;
	std::cout << aa;
	std::cout << a;
	std::cout << bb;
	std::cout << bbb;
	std::cout << b;
	std::cout << c;
	std::cout << cc;
	std::cout << ccc;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

char Tic_Tac_Toe::decide_let(int turn)
{	char ret_var = 'n';
	if(turn%2 == 1)
	{
		ret_var = 'X';
	}else{
		ret_var = 'O';
	}
	return ret_var;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

bool Tic_Tac_Toe::decide_winner(int turn, char letter)
{	bool ret_var = false;
	bool row = false;
	bool col = false;
	bool diag = false;
	bool full = false;
	row = check_row();
	//check colums diagonals and if the board is full
	if(row == true || diag == true || col == true)
	{
		std::cout << "Letter " << letter << " wins!" << std::endl;
		ret_var = true;
	}

	return ret_var;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

bool Tic_Tac_Toe::in_array(int r, int c, int turn)
{
	int num = turn - 1;
	bool ret_var = false;
	//bool c_var = false;
	//bool r_var = false;
	for(int i = 0; i <= num; i++)
	{
		if(used_r[i] == r)
		{
			if(used_c[i] == c)
			{
			ret_var = true;
			std::cout << "Coordinates occupied. Try again" << std::endl;
			break;
			}
		}
	}
	used_r[num] = r;
	used_c[num] = c;
	return ret_var;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

bool Tic_Tac_Toe::check_row()
{
	bool ret_var = false;
	char let1, let2, let3;
		let1 = aa[3];

		if(let1 == aa[11])
		{
			if(let1 == aa[19])
			{
				ret_var = true;
			}
		}
		let2 = bbb[3];
		if(let2 == bbb[11])
		{
			if(let2 == bbb[19])
			{
				ret_var = true;
			}
		}
		let3 = cc[3];
		if(let3 == cc[11])
		{
			if(let3 == cc[19])
			{
				ret_var = true;
			}
		}
	return ret_var;
}
