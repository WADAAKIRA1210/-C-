//
//  EX1_5_3.cpp
//  EX1_5_3
//
//  Created by wada keisuke on 2020/04/14.
//  Copyright © 2020 wada keisuke. All rights reserved.
//

#include "EX2_2_1.hpp"

int main(){
    
    Stack object(100);
    
    object.push('a');
    object.push('b');
    object.push('c');

    object.pop();
    object.pop();
    object.pop();
    object.pop();

    return 0;
    
}
