//
//  EX1_3_2.cpp
//  EX1_3_2
//
//  Created by wada keisuke on 2020/04/14.
//  Copyright © 2020 wada keisuke. All rights reserved.
//

#include "EX1_3_2.hpp"
#include <iostream>

int FeetChnageInch(int Feet){
    int Inch;
    Inch = Feet * 12;
    return Inch;
}

int main(){
    
    int Feet;
    
    std::cout << "input feet \n";
    std::cin >> Feet;
    std::cout << "Inch is " << FeetChnageInch(Feet) << "\n";
    
    return 0;
}
