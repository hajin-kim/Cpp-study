//
//  P-01-3-1.cpp
//  10.03 Chapter 01
//
//  Created by 김하진 on 19.10. 3.
//  Copyright © 2019 김하진. All rights reserved.
//

#include <iostream>

int BoxVolume(int length, int width = 1, int height = 1);

int BoxVolumeOver(int length);
int BoxVolumeOver(int length, int width);
int BoxVolumeOver(int length, int width, int height);

int P_01_3_1(void)
{
    std::cout << BoxVolume(3, 3, 3) << std::endl;
    std::cout << BoxVolume(5, 5) << std::endl;
    std::cout << BoxVolume(7) << std::endl;
//    std::cout << BoxVolume() << std::endl;    // Error
    
    std::cout << BoxVolumeOver(3, 3, 3) << std::endl;
    std::cout << BoxVolumeOver(5, 5) << std::endl;
    std::cout << BoxVolumeOver(7) << std::endl;
    
    return 0;
}

int BoxVolume(int length, int width, int height)
{
    return length * width * height;
}

int BoxVolumeOver(int length)
{
    return length * 1 * 1;
}
int BoxVolumeOver(int length, int width)
{
    return length * width * 1;
}
int BoxVolumeOver(int length, int width, int height)
{
    return length * width * height;
}
