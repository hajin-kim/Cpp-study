/*
 * P-02-4-1.cpp
 *
 *  Created on: Nov 13, 2019
 *      Author: kimhajin
 */

#include <iostream>
#include <cstring>

int P_02_4_1() {
	char str[50] = "Hello World!";

	std::cout << strlen(str) << std::endl;	// get length of str

	strcat(str, " Thanks!");	// extend string to str

	std::cout << str << std::endl;

	char str2[50];
	strcpy(str2, str);	// copy from str to str2

	std::cout << str2 << std::endl;

	std::cout << strcmp(str, str2) << std::endl;	// compare

	return 0;
}

