//
//  EX1_5_2.cpp
//  EX1_5_2
//
//  Created by wada keisuke on 2020/04/14.
//  Copyright © 2020 wada keisuke. All rights reserved.
//

#include "PCC2_3.hpp"

int main(){
    
    std::string Name = "abc", Address = "xyz";
    InfoNameAdd object;
    
    object.store(Name, Address);
    object.display();
    
    
    
    
    return 0;
    
}
