//
//  EX1_5_2.hpp
//  EX1_5_2
//
//  Created by wada keisuke on 2020/04/14.
//  Copyright © 2020 wada keisuke. All rights reserved.
//

#ifndef EX1_5_2_hpp
#define EX1_5_2_hpp

#include <iostream>

int Exponential(int bottom, int Index){
    int IntPwor = bottom;
    for(int i = 0; i < Index; i++){
        IntPwor *= bottom;
    }
    return IntPwor;
}


#endif /* EX1_5_2_hpp */
