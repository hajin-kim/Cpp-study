//
//  AllAccounts.hpp
//  11.14 Chapter 04-OOP Project 02
//
//  Created by 김하진 on 19.11. 14.
//  Copyright © 2019 김하진. All rights reserved.
//

#ifndef AllAccounts_hpp
#define AllAccounts_hpp

#include <iostream>
#include "Account.hpp"

class AllAccounts {
    Account **allAcc;
    int size;
    
public:
    AllAccounts();
    ~AllAccounts();
    
    void AddAccount();
    void DepositMoney();
    void WithdrawMoney();
    void ShowAllAccInfo() const;
};

#endif /* AllAccounts_hpp */
