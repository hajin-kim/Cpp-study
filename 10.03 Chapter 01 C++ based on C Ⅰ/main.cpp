//
//  main.cpp
//  10.03 Chapter 01
//
//  Created by 김하진 on 19.10. 3.
//  Copyright © 2019 김하진. All rights reserved.
//

#include <iostream>

extern int P_01_1_1(void);
extern int P_01_1_2(void);
extern int P_01_1_3(void);
extern int P_01_1_4(void);
extern int P_01_2_1(void);
extern int P_01_3_1(void);
extern int P_01_4_1();
extern int OOP_01();

int test(int = 3);

int main(int argc, const char * argv[]) {
    
//    P_01_1_1();
//    P_01_1_2();
//    P_01_1_3();
//    P_01_1_4();
//    P_01_2_1();
//    P_01_3_1();
//    P_01_4_1();
    
    OOP_01();
    
    // test
//    std::cout << test();
    
    return 0;
}

int test(int num)
{
    return num;
}
