//
//  P-03-2-1.cpp
//  11.13 Chapter 03
//
//  Created by 김하진 on 19.11. 14.
//  Copyright © 2019 김하진. All rights reserved.
//

#include <iostream>

class Calculator {
private:
    int t_add;
    int t_min;
    int t_mul;
    int t_div;
    
public:
    Calculator();
    void Init();
    
    double Add(double, double);
    double Min(double, double);
    double Mul(double, double);
    double Div(double, double);
    
    void ShowOpCount() const;
};

Calculator::Calculator() {
    t_add = t_min = t_mul = t_div = 0;
}

void Calculator::Init() {
    t_add = t_min = t_mul = t_div = 0;
}

double Calculator::Add(double op1, double op2){
    ++t_add;
    return op1 + op2;
}

double Calculator::Min(double op1, double op2){
    ++t_min;
    return op1 - op2;
}

double Calculator::Mul(double op1, double op2){
    ++t_mul;
    return op1 * op2;
}

double Calculator::Div(double op1, double op2){
    ++t_div;
    return op1 / op2;
}

void Calculator::ShowOpCount() const {
    std::cout << "============\n"
    << "Times of ...\n"
    << "Add: " << t_add << '\n'
    << "Min: " << t_min << '\n'
    << "Mul: " << t_mul << '\n'
    << "Div: " << t_div << '\n'
    << "============" <<std::endl;
}

int P_03_2_1() {
    Calculator cal;
    cal.Init();
    
    std::cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << std::endl;
    std::cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << std::endl;
    std::cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << std::endl;
    std::cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << std::endl;
    
    cal.ShowOpCount();
    
    return 0;
}

