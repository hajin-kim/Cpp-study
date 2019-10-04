//
//  OOP-01-AccountClass.h
//  10.03 Chapter 01
//
//  Created by 김하진 on 19.10. 3.
//  Copyright © 2019 김하진. All rights reserved.
//

#ifndef OOP_01_AccountClass_h
#define OOP_01_AccountClass_h

class Account {
private:
    char accid[30];
    char owner[30];
    int money;
    
public:
    Account();
    Account(char id_new[30], char owner_new[30], int money_new);
    Account(const Account& target);
    
    const char* getId() const;
    const char* getOwner() const;
    int getMoney() const;
    
    void setId(char id_new[30]);
    void setOwner(char owner_new[30]);
    void setMoney(int money_new);
    
    int printInfo() const;
};

#endif /* OOP_01_AccountClass_h */
