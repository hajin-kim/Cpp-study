//
//  AllAccounts.cpp
//  11.14 Chapter 04-OOP Project 02
//
//  Created by 김하진 on 19.11. 14.
//  Copyright © 2019 김하진. All rights reserved.
//

#include "AllAccounts.hpp"


AllAccounts::AllAccounts():allAcc(nullptr), size(0) {
}

AllAccounts::~AllAccounts() {
    for (int i = 0; i < size; ++i) {
        delete allAcc[i];
    }
    
    delete [] allAcc;
}

void AllAccounts::AddAccount() {
    std::cout << " [Make account]" << std::endl;
    
    Account **arr = new Account *[size + 1];
    
    for (int i = 0; i < size; ++i) {
        arr[i] = allAcc[i];
    }
    
    int accId, balance;
    char cusName[100];
    
    std::cout << "Account ID: ";
    std::cin >> accId;
    std::cout << "Balance: ";
    std::cin >> balance;
    std::cout << "Custom name: ";
    std::cin >> cusName;
    
    arr[size] = new Account;
    arr[size++]->Init(accId, balance, cusName);
    
    delete [] allAcc;
    allAcc = arr;
}

void AllAccounts::DepositMoney() {
    std::cout << " [Deposit money]" << std::endl;
    
    int targetID, money;
    
    std::cout << "Target ID";
    std::cin >> targetID;
    std::cout << "Money to deposit";
    std::cin >> money;
    
    for (int i = 0; i < size; ++i) {
        if (allAcc[i]->getID() == targetID) {
            allAcc[i]->ChangeMoney(money);
            std::cout << "Successfully deposited" << std::endl;
            break;
        }
    }
}

void AllAccounts::WithdrawMoney() {
    std::cout << " [Withdraw money]" << std::endl;
    
    int targetID, money;
    
    std::cout << "Target ID";
    std::cin >> targetID;
    std::cout << "Money to withdraw";
    std::cin >> money;
    
    for (int i = 0; i < size; ++i) {
        if (allAcc[i]->getID() == targetID) {
            if (allAcc[i]->getBalance() < money) {
                std::cout << "Not enough balance" << std::endl;
            }
            else {
                allAcc[i]->ChangeMoney(-money);
                std::cout << "Successfully widtdrew" << std::endl;
            }
            break;
        }
    }
}

void AllAccounts::ShowAllAccInfo() const {
    std::cout << " [Show all accounts info]" << std::endl;
    
    for (int i = 0; i < size; ++i) {
        allAcc[i]->ShowInfo();
    }
}


