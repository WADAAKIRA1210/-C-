//
//  test_1_3_2.cpp
//  googleTest
//
//  Created by wada keisuke on 2020/04/14.
//  Copyright © 2020 wada keisuke. All rights reserved.
//

#include "test_1_3_2.hpp"
#include "../EX1_3_2/EX1_3_2.cpp"
#include <gtest/gtest.h>

TEST(FeetChnageInch, multiplication){
    
    int feet = 1;
   ASSERT_EQ(FeetChnageInch(feet), 12);
    
}
