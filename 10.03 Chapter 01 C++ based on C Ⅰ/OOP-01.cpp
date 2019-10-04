//
//  OOP-01.cpp
//  10.03 Chapter 01
//
//  Created by 김하진 on 19.10. 3.
//  Copyright © 2019 김하진. All rights reserved.
//

#include <iostream>

#include "OOP-01-AccountFunc.h"
#include "OOP-01-AccountClass.h"

int OOP_01()
{
    // accounts with array
    Account* allAccounts = NULL;
    int arraysize = 0;
    
    int command = 0;
    
    while (command != 5) {
        PrintMenu();
        
        // get command from user
        std::cin >> command;
        std::cout << std::endl;
        
        char target[30];
        int index;
        
        switch (command) {
            case 1:
                // make a new account
                std::cout << "[New Account]\n";
                if (allAccounts == NULL) {
                    allAccounts = new Account[++arraysize];
                    SetAccountInfo(&allAccounts[0]);
                }
                else {
                    Account tmp = GetNewAccount(allAccounts, arraysize);

                    // check account number overlapping
                    if (tmp.getOwner()[0] != '\0' && tmp.getMoney() != -1) {
                        ExtendAccountArray(allAccounts, arraysize);
                        allAccounts[arraysize++] = Account(tmp);
                    }
                    else {
                        std::cout << "Error: account number " << tmp.getId() << " already exists\n";
                    }
                }
                break;
                
            case 2:
                // deposit money into account
                std::cout << "[Money Deposit]\n";
                
                index = FindAccountId(allAccounts, arraysize, InputId(target));
                
                if (index == -1) {
                    // if account number doesn't exist
                    std::cout << "Error: account number " << target << " doesn't exists\n";
                } else {
                    // deposit
                    allAccounts[index].setMoney(allAccounts[index].getMoney() + InputMoney());
                    std::cout << "Deposit is completed\n";
                }
                break;
                
            case 3:
                // withdraw money from account
                std::cout << "[Money Withdrawal]\n";
                
                index = FindAccountId(allAccounts, arraysize, InputId(target));
                
                if (index == -1) {
                    // if account number doesn't exist
                    std::cout << "Error: account number " << target << " doesn't exists\n";
                } else {
                    int result = allAccounts[index].getMoney() - InputMoney();
                    
                    if (result < 0) {
                        // if account cash is insufficient
                        std::cout << "Error: account balance isn't enough\n";
                    } else {
                        // withdrawal
                        allAccounts[index].setMoney(result);
                        std::cout << "Withdrawal is completed\n";
                    }
                }
                break;
                
            case 4:
                // show informations of all accounts
                if (arraysize == 0) {
                    std::cout << "No account is found\n";
                } else {
                    for (int i = 0; i < arraysize; ++i) {
                        allAccounts[i].printInfo();
                    }
                }
                break;
                
            case 5:
                // terminate program
                std::cout << "Program terminates. . .";
                break;
                
            default:
                std::cout << "Error: undefined command is given\n";
                break;
        }
        std::cout << std::endl;
    }
    
    
    return 0;
}
