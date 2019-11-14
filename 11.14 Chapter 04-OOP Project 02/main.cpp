//
//  main.cpp
//  11.14 Chapter 04-OOP Project 02
//
//  Created by 김하진 on 19.11. 14.
//  Copyright © 2019 김하진. All rights reserved.
//

#include <iostream>
#include "Account.hpp"
#include "AllAccounts.hpp"



int main(int argc, const char * argv[]) {
    // insert code here...
    
    AllAccounts all;
    
    int menu = 1;
    
    while (menu != 5) {
        std::cout << "### Account Management Program ###" << std::endl
        << "1: Make account" << std::endl
        << "2: Deposit money" << std::endl
        << "3: Withdraw money" << std::endl
        << "4: Show all accounts info" << std::endl
        << "5: Exit" << std::endl
        << "Command: ";
        
        std::cin >> menu;
        std::cout << std::endl;
        
        switch (menu) {
                // make account
            case 1:
                all.AddAccount();
                break;
                
                // deposit money
            case 2:
                all.DepositMoney();
                break;
                
                // withdraw money
            case 3:
                all.WithdrawMoney();
                break;
                
                // show all accounts info
            case 4:
                all.ShowAllAccInfo();
                break;
                
                // exit
            case 5:
                std::cout << "Exiting...";
                break;
                
            default:
                std::cout << "Wrong command" << std::endl;
                break;
        }
        
        std::cout << std::endl;
    }
    
    
    
    return 0;
}
