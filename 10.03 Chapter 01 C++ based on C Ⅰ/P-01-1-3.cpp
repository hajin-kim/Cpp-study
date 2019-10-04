//
//  P-01-1-3.cpp
//  10.03 Chapter 01
//
//  Created by 김하진 on 19.10. 3.
//  Copyright © 2019 김하진. All rights reserved.
//

#include <iostream>

int P_01_1_3(void)
{
    int inp;
    std::cin >> inp;
    
    for (int i = 1; i <= 9; ++i) {
        std::cout << inp << " * " << i << " = " << inp * i << std::endl;
    }
    
    return 0;
}
