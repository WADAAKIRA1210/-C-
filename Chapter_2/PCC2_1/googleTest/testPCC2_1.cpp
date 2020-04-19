//
//  test1_5_2.cpp
//  googleTest
//
//  Created by wada keisuke on 2020/04/14.
//  Copyright © 2020 wada keisuke. All rights reserved.
//

#include "../PCC2_1/PCC2_1.hpp"
#include <gtest/gtest.h>

TEST(InputString, CheckStringLen){
    std::string Input = "abc";
    int Strlen = (int)Input.length();

    ASSERT_EQ(Strlen, 3);
    
}
