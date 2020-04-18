//
//  test1_5_2.cpp
//  googleTest
//
//  Created by wada keisuke on 2020/04/14.
//  Copyright © 2020 wada keisuke. All rights reserved.
//

#include "../EX2_3_1/EX2_3_1.hpp"
#include <gtest/gtest.h>

TEST(Aera, CheckArea){

    double Height = 5.5, Width = 3.0, Area;
    
    Area = Height * Width;
    
    ASSERT_EQ(Area, 16.5);
    
}

TEST(Rectangle, CheckArea){
    
    Rectangle object(5.5, 3.0);

    ASSERT_EQ(object.Area(), 16.5);
    
}

TEST(Isosceles, CheckArea){
    
    Isosceles object(5.0, 3.0);
    
    ASSERT_EQ(object.Area(), 7.5);
    
}
