//
//  test1_5_2.cpp
//  googleTest
//
//  Created by wada keisuke on 2020/04/14.
//  Copyright © 2020 wada keisuke. All rights reserved.
//

#include "../PCC2_3/PCC2_3.hpp"
#include <gtest/gtest.h>

TEST(CounterclockwiseBit, CharCheck){
    const char* Bit = "0001";
    char CBit[5] = "0001";
    
    

    ASSERT_STREQ(Bit , "0010");
    
}
