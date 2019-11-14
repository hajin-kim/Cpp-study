//
//  Account.cpp
//  11.14 Chapter 04-OOP Project 02
//
//  Created by 김하진 on 19.11. 14.
//  Copyright © 2019 김하진. All rights reserved.
//

#include "Account.hpp"

Account::Account():accID(0), balance(0), cusName(nullptr) {
}

Account::~Account() {
    delete [] cusName;
}

int Account::getID() const {
    return accID;
}

int Account::getBalance() const {
    return balance;
}

void Account::Init(int _accID, int _balance, char *_cusName) {
    accID = _accID;
    balance = _balance;
    cusName = new char[strlen(_cusName) + 1];
    strcpy(cusName, _cusName);
}

void Account::ChangeMoney(int _money) {
    balance += _money;
}

void Account::ShowInfo() const { 
    std::cout << " [Account]" << std::endl
    << "Account ID: " << accID << std::endl
    << "Balance: " << balance << std::endl
    << "Custom name: " << cusName << std::endl;
}

