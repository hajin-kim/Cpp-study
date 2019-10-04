//
//  P-01-1-2.cpp
//  10.03 Chapter 01
//
//  Created by 김하진 on 19.10. 3.
//  Copyright © 2019 김하진. All rights reserved.
//

#include <iostream>

int P_01_1_2(void)
{
    char name[30], phone[30];
    
    std::cout << "Name: ";
    std::cin >> name;
    
    std::cout << "Phone number: ";
    std::cin >> phone;
    
    std::cout << name << ' ' << phone;
    
    return 0;
}
