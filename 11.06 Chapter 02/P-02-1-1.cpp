/*
 * P-02-1-1.cpp
 *
 *  Created on: Nov 8, 2019
 *      Author: kimhajin
 */

#include <iostream>

void Increase(int &);
void SignConv(int &);

int P_02_1_1() {
	int num = 0;

	std::cout << num << std::endl;

	Increase(num);

	std::cout << num << std::endl;

	SignConv(num);

	std::cout << num << std::endl;

	return 0;
}

void Increase(int &num) {
	++num;
}

void SignConv(int &num) {
	num *= -1;
}
