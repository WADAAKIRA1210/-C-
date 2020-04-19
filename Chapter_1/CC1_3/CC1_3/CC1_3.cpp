//
//  EX1_5_2.cpp
//  EX1_5_2
//
//  Created by wada keisuke on 2020/04/14.
//  Copyright © 2020 wada keisuke. All rights reserved.
//

#include "CC1_3.hpp"

int main(){
    
    int Bottom, Index;
    
    std::cout << "Calculate exponential function\n" << "input bottom and Index \n";
    std::cin >> Bottom >> Index;
    std::cout <<"Integer power is "<< Exponential(Bottom, Index) << std::endl;
    
    return 0;
    
}
