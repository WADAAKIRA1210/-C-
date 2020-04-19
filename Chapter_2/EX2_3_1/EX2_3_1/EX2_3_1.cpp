//
//  EX1_5_3.cpp
//  EX1_5_3
//
//  Created by wada keisuke on 2020/04/14.
//  Copyright © 2020 wada keisuke. All rights reserved.
//

#include "EX2_3_1.hpp"

int main(){
    
    Isosceles object1(5.0, 3.0);
    Rectangle object2(5.5, 3.0);
    
    std::cout << "Area of isosceles is " << object1.Area() << "\n";
    std::cout << "Area of rectangle is " << object2.Area() << "\n";
    
    return 0;
}
