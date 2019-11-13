/*
 * P-02-4-2.cpp
 *
 *  Created on: Nov 13, 2019
 *      Author: kimhajin
 */

#include <iostream>
#include <ctime>
#include <random>

int P_02_4_2() {

	int size = 5;
	int* arr = new int[size];

	srand(time(NULL));

	for(int i = 0; i < size; ++i) {
		arr[i] = rand() % 100;
		std::cout << arr[i] << std::endl;
	}

	delete[] arr;

	return 0;
}
