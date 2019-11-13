//
//  test.hpp
//  11.13 Chapter 03
//
//  Created by 김하진 on 19.11. 13.
//  Copyright © 2019 김하진. All rights reserved.
//

#ifndef test_hpp
#define test_hpp

class Foo {
    int myint;
    
public:
    void Bar();
};

// no error
//inline void Foo::Bar() {
//    myint = 1;
//}

#endif /* test_hpp */
