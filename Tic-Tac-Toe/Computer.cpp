/*
 * Computer.cpp
 *
 *  Created on: May 14, 2014
 *      Author: josh
 */

#include"Computer.h"


int Computer::get_last_move(int row, int col)
{
	int ret_var = 0;

	switch(row)
	{
	case 1:
	{
		switch(col)
		{
		case 1:
		{
			ret_var = 0;
		}
		break;
		case 2:
		{
			ret_var = 1;
		}
		break;
		case 3:
		{
			ret_var = 2;
		}
		}
	}
	break;
	case 2:
	{
		switch(col)
		{
		case 1:
		{
			ret_var = 3;
		}
		break;
		case 2:
		{
			ret_var = 4;
		}
		break;
		case 3:
		{
			ret_var = 5;
		}
		}
	}
	break;
	case 3:
	{
		switch(col)
		{
		case 1:
		{
			ret_var = 6;
		}
		break;
		case 2:
		{
			ret_var = 7;
		}
		break;
		case 3:
		{
			ret_var = 8;
		}
		}
	}
	}
	return ret_var;
}
