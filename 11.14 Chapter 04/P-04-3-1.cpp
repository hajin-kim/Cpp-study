//
//  P-04-3-1.cpp
//  11.14 Chapter 04
//
//  Created by 김하진 on 19.11. 14.
//  Copyright © 2019 김하진. All rights reserved.
//

#include <iostream>

// class Point
class Point {
private:
    int xpos, ypos;
    
public:
    Point();
    
    void Init(int x, int y);
    void ShowPointInfo() const;
};

Point::Point() {
    xpos = 0;
    ypos = 0;
}

void Point::Init(int x, int y) {
    xpos = x;
    ypos = y;
}

void Point::ShowPointInfo() const {
    std::cout << '[' << xpos << ", " << ypos << ']' << std::endl;
}

// class Circle
class Circle {
private:
    Point center;
    int radius;
    
public:
    Circle();
    
    void Init(int x, int y, int r);
    void ShowCircleInfo() const;
};

Circle::Circle():center() {
    radius = 0;
}

void Circle::Init(int x, int y, int r) {
    center.Init(x, y);
    radius = r;
}

void Circle::ShowCircleInfo() const {
    center.ShowPointInfo();
    std::cout << "Radius: " << radius << std::endl;
}

// class Ring
class Ring {
    Circle c1, c2;
    
public:
    Ring();
    
    void Init(int x1, int y1, int r1, int x2, int y2, int r2);
    void ShowRingInfo() const;
};

Ring::Ring():c1(), c2() {
}

void Ring::Init(int x1, int y1, int r1, int x2, int y2, int r2) {
    c1.Init(x1, y1, r1);
    c2.Init(x2, y2, r2);
}

void Ring::ShowRingInfo() const {
    std::cout << "Inner Circle Info..." << std::endl;
    c1.ShowCircleInfo();
    std::cout << "Outer Circle Info..." << std::endl;
    c2.ShowCircleInfo();
}

// main
int P_04_3_1() {
    Ring ring;
    
    ring.Init(1, 1, 4, 2, 2, 9);
    ring.ShowRingInfo();
    
    return 0;
}
