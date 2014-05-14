/*
 * Computer.h
 *
 *  Created on: May 14, 2014
 *      Author: josh
 */

#ifndef COMPUTER_H_
#define COMPUTER_H_
#include<iostream>
#include<vector>
class Computer
{
public:
	std::string decide_move();
	int get_last_move(int, int);

private:
	bool up;
	bool down;
	bool left;
	bool right;
};




#endif /* COMPUTER_H_ */
