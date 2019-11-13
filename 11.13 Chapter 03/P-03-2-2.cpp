//
//  P-03-2-2.cpp
//  11.13 Chapter 03
//
//  Created by 김하진 on 19.11. 14.
//  Copyright © 2019 김하진. All rights reserved.
//

#include <iostream>

class Printer {
private:
    std::string my_str;
    
public:
    Printer();
    
    void SetString(std::string);
    void ShowString() const;
};

Printer::Printer() {
    my_str = "";
}

void Printer::SetString(std::string _str) {
    my_str = _str;
}

void Printer::ShowString() const {
    std::cout << my_str << std::endl;
}

int P_03_2_2() {
    Printer pnt;
    
    pnt.SetString("Hello world!");
    pnt.ShowString();
    
    pnt.SetString("I love C++");
    pnt.ShowString();
    
    return 0;
}

