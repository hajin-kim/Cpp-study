//============================================================================
// Name        : 06.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

extern int P_02_1_1();
extern int P_02_1_2();
extern int P_02_1_3();
extern int P_02_2_1();
extern int P_02_3_1();
extern int P_02_4_1();
extern int P_02_4_2();

int &test() { static int a = 30; return a; }

int main() {

//	P_02_1_1();
//	P_02_1_2();
//	P_02_1_3();
//	P_02_2_1();
//	P_02_3_1();
//	P_02_4_1();
	P_02_4_2();

	int &a = test();
	a++;
	a = test();

	const int* b = new int(20);

	std::cout << a << *b;

	return 0;
}
