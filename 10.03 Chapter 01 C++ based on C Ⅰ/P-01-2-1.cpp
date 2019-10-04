//
//  P-01-2-1.cpp
//  10.03 Chapter 01
//
//  Created by 김하진 on 19.10. 3.
//  Copyright © 2019 김하진. All rights reserved.
//

#include <iostream>

void swap(int* n1, int* n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void swap(char* c1, char* c2)
{
    char temp = *c1;
    *c1 = *c2;
    *c2 = temp;
}

void swap(double* d1, double* d2)
{
    double temp = *d1;
    *d1 = *d2;
    *d2 = temp;
}

int P_01_2_1(void)
{
    int num1 = 20, num2 = 30;
    swap(&num1, &num2);
    std::cout << num1 << ' ' << num2 << std::endl;
    
    char ch1 = 'A', ch2 = 'Z';
    swap(&ch1, &ch2);
    std::cout << ch1 << ' ' << ch2 << std::endl;
    
    double dbl1 = 1.111, dbl2 = 5.555;
    swap(&dbl1, &dbl2);
    std::cout << dbl1 << ' ' << dbl2 << std::endl;
    
    return 0;
}
