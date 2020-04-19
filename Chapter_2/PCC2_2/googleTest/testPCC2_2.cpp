//
//  test1_5_2.cpp
//  googleTest
//
//  Created by wada keisuke on 2020/04/14.
//  Copyright © 2020 wada keisuke. All rights reserved.
//

#include "../PCC2_2/PCC2_2.hpp"
#include <gtest/gtest.h>

TEST(InfoNameAdd, InformationDisplay){
    InfoNameAdd object;
    std::string Name, Address;
    Name = "abc";
    Address = "def";
    object.store(Name, Address);
    
    EXPECT_EQ(object.Name, "abc");
    EXPECT_EQ(object.Address, "def");
    
}
