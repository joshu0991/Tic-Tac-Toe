/*
 * Tic_Tac_Toe.h
 *
 *  Created on: May 13, 2014
 *      Author: josh
 */

#ifndef TIC_TAC_TOE_H_
#define TIC_TAC_TOE_H_
#include<string>
#include<iostream>
class Tic_Tac_Toe
{
	public:
		void set_char(char, int, int);
		int get_row(void);
		int get_col(void);
		void print_board();
		char decide_let(int);
		bool decide_winner(int, char);
		bool in_array(int, int, int);
		bool check_row(void);
		bool check_col(void);
		bool check_diag(void);
		bool is_full(void);
	private:
		//string a, b, c;
	std::string a_n   = "       |       |       \n";
	std::string aa    = "       |       |       \n";
		std::string a = "_______|_______|_______\n";
	std::string bb    = "       |       |       \n";
	std::string bbb   = "       |       |       \n";
		std::string b = "_______|_______|_______\n";
		std::string c = "       |       |       \n";
	std::string cc    = "       |       |       \n";
	std::string ccc   = "       |       |       \n";
	int used_r[9];
	int used_c[9];
};



#endif /* TIC_TAC_TOE_H_ */
