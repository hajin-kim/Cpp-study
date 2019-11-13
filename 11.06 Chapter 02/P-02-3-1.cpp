/*
 * P-02-3-1.cpp
 *
 *  Created on: Nov 13, 2019
 *      Author: kimhajin
 */

#include <iostream>

typedef struct __Point {
	int xpos;
	int ypos;
} Point;

Point& PntAdder(const Point &p1, const Point &p2) {
	Point* myPoint = new Point;

	myPoint->xpos = p1.xpos + p2.xpos;
	myPoint->ypos = p1.ypos + p2.ypos;

	return *myPoint;
}

int P_02_3_1() {
	Point* p1 = new Point;
	p1->xpos = 1;
	p1->ypos = 2;

	Point* p2 = new Point;
	p2->xpos = 3;
	p2->ypos = 4;

	Point &myPoint = PntAdder(*p1, *p2);

	++myPoint.xpos;
	++myPoint.ypos;

	std::cout << myPoint.xpos << ' ' << myPoint.ypos << std::endl;

	delete p1;
	delete p2;
	delete &myPoint;

	return 0;
}


