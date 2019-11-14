//
//  P-04-3-2.cpp
//  11.14 Chapter 04
//
//  Created by 김하진 on 19.11. 14.
//  Copyright © 2019 김하진. All rights reserved.
//

#include <iostream>
#include <cstring>

namespace COMP_POS {
enum {
    CLERK, SENIOR, ASSIST, MANAGER
};
}

class NameCard {
    char *name;
    char *comp;
    char *tele;
    int pos;
    
public:
    NameCard(const char *_name, const char *_comp, const char *_tele, int _pos);
    ~NameCard();
    
    void ShowNameCardInfo() const;
};

NameCard::NameCard(const char *_name, const char *_comp, const char *_tele, int _pos) {
    int _name_size = (int)strlen(_name) + 1;
    name = new char[_name_size];
    strcpy(name, _name);
    
    int _comp_size = (int)strlen(_comp) + 1;
    comp = new char[_comp_size];
    strcpy(comp, _comp);
    
    int _tele_size = (int)strlen(_tele) + 1;
    tele = new char[_tele_size];
    strcpy(tele, _tele);
    
    pos = _pos;
}

NameCard::~NameCard() {
    delete [] name;
    delete [] comp;
    delete [] tele;
}

void NameCard::ShowNameCardInfo() const {
    char *_pos;
    
    switch (pos) {
        case COMP_POS::CLERK:
            _pos = new char[6];
            strcpy(_pos, "clerk");
            break;
        case COMP_POS::SENIOR:
            _pos = new char[7];
            strcpy(_pos, "senior");
            break;
        case COMP_POS::ASSIST:
            _pos = new char[7];
            strcpy(_pos, "assist");
            break;
        case COMP_POS::MANAGER:
            _pos = new char[8];
            strcpy(_pos, "manager");
            break;
        default:
            _pos = new char('\n');
            break;
    }
    
    std::cout << " [Name Card]" << std::endl
    << "Name: " << name << std::endl
    << "Company: " << comp << std::endl
    << "Telephone: " << tele << std::endl
    << "Position: " << _pos << std::endl;
}

int P_04_3_2() {
    NameCard manClerk("Lee", "ABC", "010-1234-5678", COMP_POS::CLERK);
    NameCard manSenior("Hong", "DEF", "010-1111-0000", COMP_POS::SENIOR);
    NameCard manAssist("Kim", "Good", "010-2345-6789", COMP_POS::ASSIST);
    
    manClerk.ShowNameCardInfo();
    manSenior.ShowNameCardInfo();
    manAssist.ShowNameCardInfo();
    
    return 0;
}
