//
//  OOP-01-AccountClass.cpp
//  10.03 Chapter 01
//
//  Created by 김하진 on 19.10. 3.
//  Copyright © 2019 김하진. All rights reserved.
//

#include <iostream>
#include <cstring>

#include "OOP-01-AccountClass.hpp"

Account::Account()
{
    money = 0;
}
Account::Account(char id_new[30], char owner_new[30], int money_new)
{
    strcpy(accid, id_new);
    strcpy(owner, owner_new);
    money = money_new;
}
Account::Account(const Account& target)
{
    strcpy(accid, target.accid);
    strcpy(owner, target.owner);
    money = target.money;
}

const char* Account::getId() const
{
    return accid;
}
const char* Account::getOwner() const
{
    return owner;
}
int Account::getMoney() const
{
    return money;
}

void Account::setId(char id_new[30])
{
    strcpy(accid, id_new);
}
void Account::setOwner(char owner_new[30])
{
    strcpy(owner, owner_new);
}
void Account::setMoney(int money_new)
{
    money = money_new;
}

int Account::printInfo() const
{
    using namespace std;
    
    cout << "[Account Info]\n";
    cout << "ID: " << accid << '\n';
    cout << "Owner: " << owner << '\n';
    cout << "Money: " << money << endl;
    
    return 0;
}
