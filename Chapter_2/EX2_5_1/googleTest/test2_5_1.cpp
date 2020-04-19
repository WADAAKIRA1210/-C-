#include "../EX2_5_1/EX2_5_1.hpp"
#include <gtest/gtest.h>

TEST(Aera, CheckArea){

    double Height = 5.5, Width = 3.0, Area;
    
    Area = Height * Width;
    
    ASSERT_EQ(Area, 16.5);
    
}

