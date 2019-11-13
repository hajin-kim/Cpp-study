//
//  P-03-1-1.cpp
//  11.13 Chapter 03
//
//  Created by 김하진 on 19.11. 13.
//  Copyright © 2019 김하진. All rights reserved.
//

#include <iostream>

struct Point {
    int xpos;
    int ypos;
    
    void MovePos(int x, int y) {
        xpos += x;
        ypos += y;
    }
    
    void AddPoint(const Point &pos) {
        xpos += pos.xpos;
        ypos += pos.ypos;
    }
    
    void ShowPosition() {
        std::cout << '[' << xpos << ", " << ypos << ']' << std::endl;
    }
};

int P_03_1_1() {
    Point pos1 = {12, 4};
    Point pos2 = {20, 30};
    
    pos1.MovePos(-7, 10);
    pos1.ShowPosition();
    
    pos1.AddPoint(pos2);
    pos1.ShowPosition();
    
    return 0;
}
