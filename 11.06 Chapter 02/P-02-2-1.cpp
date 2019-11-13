/*
 * P-02-2-1.cpp
 *
 *  Created on: Nov 13, 2019
 *      Author: kimhajin
 */

#include <iostream>

int P_02_2_1() {
	const int num = 12;
	const int* ptr = &num;
	const int* &ref = ptr;

	std::cout << *ptr << ' ' << *ref << std::endl;

	return 0;
}


