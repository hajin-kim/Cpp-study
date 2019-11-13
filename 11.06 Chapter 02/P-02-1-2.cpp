/*
 * P-02-1-2.cpp
 *
 *  Created on: Nov 8, 2019
 *      Author: kimhajin
 */

#include <iostream>

void SwapByRef(int &, int &);

int P_02_1_2() {
	int num1 = 1, num2 = 22;

	std::cout << num1 << ' ' << num2 << std::endl;

	SwapByRef(num1, num2);

	std::cout << num1 << ' ' << num2 << std::endl;

//	SwapByRef(1, 22)	// requires l-value

	return 0;
}

void SwapByRef(int &n1, int &n2) {
	int temp = n1;
	n1 = n2;
	n2 = temp;
}
