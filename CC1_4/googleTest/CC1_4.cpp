//
//  test1_5_2.cpp
//  googleTest
//
//  Created by wada keisuke on 2020/04/14.
//  Copyright © 2020 wada keisuke. All rights reserved.
//

#include "../CC1_4/CC1_4.hpp"
#include <gtest/gtest.h>

TEST(RverseString, StringCheck){
    
    const char* Origin = "abc";
    char ReverseChar[4] = "cba";
    
    int len = (int)strlen(ReverseChar);
    
    for (int i = 0; i < len /2; i ++){
        char temp;
        temp = ReverseChar[i];
        ReverseChar[i] = ReverseChar[len - i];
        ReverseChar[len - i] =temp;
    }
    
    const char* ReverseChar1;
    strcpy(ReverseChar, ReverseChar1);
    
    ASSERT_STREQ(Origin, ReverseChar1);
    
    
}
