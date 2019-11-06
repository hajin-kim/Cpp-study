//
//  AccountFunc.hpp
//  10.03 Chapter 01-OOP Project 01
//
//  Created by 김하진 on 19.10. 3.
//  Copyright © 2019 김하진. All rights reserved.
//

#ifndef P_01_6_AccountFunc_hpp
#define P_01_6_AccountFunc_hpp

#include "AccountClass.hpp"

int PrintMenu();

char* InputId(char accid[30]);
char* InputOwner(char owner[30]);
int InputMoney(int money = 0);

int FindAccountId(const Account* target, int size, const char id_str[30]);

Account GetNewAccount(Account* overlapFinder, int size);
void SetAccountInfo(Account* target);
void ExtendAccountArray(Account*& allAccounts, int arraysize);

#endif /* OOP_01_AccountFunc_hpp */
