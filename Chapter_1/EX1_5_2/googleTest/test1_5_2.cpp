//
//  test1_5_2.cpp
//  googleTest
//
//  Created by wada keisuke on 2020/04/14.
//  Copyright © 2020 wada keisuke. All rights reserved.
//

#include "../EX1_5_2/EX1_5_2.hpp"
#include <gtest/gtest.h>

TEST(BookInformation, InformationDisplay){
    std::string Title, Author;
    int Stock;
    Card object;
    
    Title = "abc";
    Author = "def";
    Stock = 2;

    object.store(Title, Author, Stock);
    EXPECT_EQ(object.Title, "abc");
    EXPECT_EQ(object.Author, "def");
    ASSERT_EQ(object.Stock, 2);
    
}
