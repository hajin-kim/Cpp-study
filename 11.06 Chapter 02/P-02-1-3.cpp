/*
 * P-02-1-3.cpp
 *
 *  Created on: Nov 8, 2019
 *      Author: kimhajin
 */

#include <iostream>

void SwapPointer(int* &, int* &);

int P_02_1_3() {
	int n1 = 1, n2 = 22;
	int* p1 = &n1, * p2 = &n2;

	std::cout << *p1 << ' ' << *p2 << std::endl;

	SwapPointer(p1, p2);

	std::cout << *p1 << ' ' << *p2 << std::endl;
	std::cout << n1 << ' ' << n2 << std::endl;

	return 0;
}

void SwapPointer(int* &p1, int* &p2) {
	int* temp = p1;
	p1 = p2;
	p2 = temp;
}

