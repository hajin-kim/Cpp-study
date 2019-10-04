//
//  OOP-01-AccountFunc.cpp
//  10.03 Chapter 01
//
//  Created by 김하진 on 19.10. 3.
//  Copyright © 2019 김하진. All rights reserved.
//

#include <iostream>

#include "OOP-01-AccountClass.hpp"
#include "OOP-01-AccountFunc.hpp"

int PrintMenu()
{
    using std::cout;
    using std::endl;
    
    cout << "-----Menu-----\n";
    cout << "1: Make a new account\n";
    cout << "2: Deposit money into account\n";
    cout << "3: Withdraw money from account\n";
    cout << "4: Show informations of all accounts\n";
    cout << "5: Terminate program" << endl;
    cout << "Your command: ";
    
    return 0;
}

char* InputId(char accid[30])
{
    std::cout << "Input account number: ";
    std::cin >> accid;
    
    return accid;
}

char* InputOwner(char owner[30])
{
    std::cout << "Input owner: ";
    std::cin >> owner;
    
    return owner;
}

int InputMoney(int money)
{
    std::cout << "Input money: ";
    std::cin >> money;
    
    return money;
}

int FindAccountId(const Account* target, int size, const char id_str[30])
{
    for (int i = 0; i < size; ++i) {
        if (strcmp(target[i].getId(), id_str) == 0) {
            return i;
        }
    }
    
    return -1;
}

Account GetNewAccount(Account* overlapFinder, int size)
{
    char id_new[30];
    char owner_new[30];
    
    if (FindAccountId(overlapFinder, size, InputId(id_new)) != -1) {
        // account number already exists
        return Account(id_new, (char*)"", -1);
    }

    return Account(id_new, InputOwner(owner_new), InputMoney());
}

void SetAccountInfo(Account* target)
{
    char id_new[30];
    target->setId(InputId(id_new));
    
    char owner_new[30];
    target->setOwner(InputOwner(owner_new));
    
    target->setMoney(InputMoney());
}

void ExtendAccountArray(Account*& allAccounts, int arraysize)
{
    Account* tmpAccounts = new Account[arraysize];

    // copy to temporary array
    for (int i = 0; i < arraysize; ++i) {
        tmpAccounts[i] = Account(allAccounts[i]);
    }

    // delete and extend
    delete[] allAccounts;
    allAccounts = new Account[arraysize + 1];
    
    // copy original data
    for (int i = 0; i < arraysize; ++i) {
        allAccounts[i] = Account(tmpAccounts[i]);
    }
    
    delete[] tmpAccounts;
}
