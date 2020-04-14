//
//  main.cpp
//  EX1_3_3
//
//  Created by wada keisuke on 2020/04/14.
//  Copyright © 2020 wada keisuke. All rights reserved.
//

#include"header.hpp"

int main() {
    
    int X, Y;
    
    std::cout << "input two number\n";
    std::cin >> X >> Y;
    std::cout << "GreatestCommonDivisor is " << GreatestCommonDivisor(X, Y) << "\n";

    return 0;
}
