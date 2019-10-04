//
//  P-01-1-1.cpp
//  10.03 Chapter 01
//
//  Created by 김하진 on 19.10. 3.
//  Copyright © 2019 김하진. All rights reserved.
//

#include <iostream>

int P_01_1_1(void)
{
    int sum = 0;
    for(int i = 0; i < 5; ++i)
    {
        std::cout << "Num " << i + 1 << ": ";
        
        int inp;
        std::cin >> inp;
        
        sum += inp;
    }
    
    std::cout << "Sum: " << sum;
    
    return 0;
}
