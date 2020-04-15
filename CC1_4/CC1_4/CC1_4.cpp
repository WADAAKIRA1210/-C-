//
//  EX1_5_2.cpp
//  EX1_5_2
//
//  Created by wada keisuke on 2020/04/14.
//  Copyright © 2020 wada keisuke. All rights reserved.
//

#include "CC1_4.hpp"

int main(){
    
    const char* Origin = "abcd";
    char ReverseChar[5] = "dcba";
    
    std::cout << rev_str(ReverseChar) << "\n";
    std::cout << rev_str(Origin, ReverseChar) << "\n";
    
    return 0;
    
}
