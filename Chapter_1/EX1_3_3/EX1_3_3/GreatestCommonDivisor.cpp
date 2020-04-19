//
//  GreatestCommonDivisor.cpp
//  EX1_3_3
//
//  Created by wada keisuke on 2020/04/14.
//  Copyright © 2020 wada keisuke. All rights reserved.
//

#include"header.hpp"

int GreatestCommonDivisor(int X, int Y){
    if(!Y) return X;
    return GreatestCommonDivisor(X, X%Y);
}
