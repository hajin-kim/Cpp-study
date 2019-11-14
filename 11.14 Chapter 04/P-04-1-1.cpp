//
//  P-04-1-1.cpp
//  11.14 Chapter 04
//
//  Created by 김하진 on 19.11. 14.
//  Copyright © 2019 김하진. All rights reserved.
//

#include <iostream>

class FruitSeller {
private:
    int APPLE_PRICE;
    int numOfApples;
    int myMoney;
    
public:
    FruitSeller();
    FruitSeller(int _apple_price);
    
    void InitMember(int _apple_price, int _apple_num, int _money);
    
    int SaleApples(int _money);
    
    void ShowSalesResult() const;
};

FruitSeller::FruitSeller():APPLE_PRICE(1000) {
    numOfApples = 0;
    myMoney = 0;
}

FruitSeller::FruitSeller(int _apple_price):APPLE_PRICE(_apple_price) {
    numOfApples = 0;
    myMoney = 0;
}

void FruitSeller::InitMember(int _apple_price, int _apple_num, int _money) {
    APPLE_PRICE = _apple_price;
    numOfApples = _apple_num;
    myMoney = _money;
}

int FruitSeller::SaleApples(int _money) {
    if (_money < 0) {
        throw (std::string)"Not enough money";
    }
    int num = _money / APPLE_PRICE;
    numOfApples -= num;
    myMoney += _money;
    return num;
}

void FruitSeller::ShowSalesResult() const {
    std::cout << "Left apples: " << numOfApples << std::endl;
    std::cout << "Revenue: " << myMoney << std::endl;
}

class FruitBuyer {
    int numOfApples;
    int myMoney;
    
public:
    FruitBuyer();
    void InitMember(int _money);
    void BuyApples(FruitSeller &seller, int _money); // condition: money must not < 0
    void ShowBuyResult() const;
};

FruitBuyer::FruitBuyer() {
    numOfApples = 0;
    myMoney = 0;
}

void FruitBuyer::InitMember(int _money) {
    numOfApples = 0;
    myMoney = _money;
}

void FruitBuyer::BuyApples(FruitSeller &seller, int _money) {
    if (_money < 0) {
        throw (std::string)"Not enough money";
    }
    
    int num = seller.SaleApples(_money);
    numOfApples += num;
    myMoney -= _money;
}

void FruitBuyer::ShowBuyResult() const {
    std::cout << "Having apples: " << numOfApples << std::endl;
    std::cout << "Left money: " << myMoney << std::endl;;
}

int P_04_1_1() {
    FruitSeller seller;
    seller.InitMember(1000, 20, 0);
    FruitBuyer buyer;
    buyer.InitMember(5000);
    buyer.BuyApples(seller, 2000);
    
    std::cout << "# Seller: " << std::endl;
    seller.ShowSalesResult();
    std::cout << "# Buyer: " << std::endl;
    buyer.ShowBuyResult();
    
    return 0;
}
