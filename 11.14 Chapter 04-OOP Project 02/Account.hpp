//
//  Account.hpp
//  11.14 Chapter 04-OOP Project 02
//
//  Created by 김하진 on 19.11. 14.
//  Copyright © 2019 김하진. All rights reserved.
//

#ifndef Account_hpp
#define Account_hpp

#include <iostream>
#include <cstring>

class Account {
private:
    int accID;
    int balance;
    char *cusName;
    
public:
    Account();
    ~Account();
    
    int getID() const;
    int getBalance() const;
    
    void Init(int _accID, int _balance, char *_cusName);
    void ChangeMoney(int _money);
    void ShowInfo() const;
};

#endif /* Account_hpp */
