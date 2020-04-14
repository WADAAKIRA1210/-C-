//
//  testEX1_3_3.cpp
//  googleTest
//
//  Created by wada keisuke on 2020/04/14.
//  Copyright © 2020 wada keisuke. All rights reserved.
//


#include "../EX1_3_3/GreatestCommonDivisor.cpp"
#include <gtest/gtest.h>

TEST(GreatestCommonDivisor, X_Y){
    ASSERT_EQ(GreatestCommonDivisor(10, 30), 10);
}
