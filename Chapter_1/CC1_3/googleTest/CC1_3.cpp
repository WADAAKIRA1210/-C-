//
//  test1_5_2.cpp
//  googleTest
//
//  Created by wada keisuke on 2020/04/14.
//  Copyright © 2020 wada keisuke. All rights reserved.
//

#include "../CC1_3/CC1_3.hpp"
#include <gtest/gtest.h>

TEST(Exponential, NumCheck){
    int bottom = 2;
    int Index = 3;
    int IntPwor = bottom;
    
    for(int i = 0; i < Index; i++){
        IntPwor *= bottom;
    }
    ASSERT_EQ(IntPwor, 8);
    
}
