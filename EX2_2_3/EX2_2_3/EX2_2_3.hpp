//
//  EX1_5_3.hpp
//  EX1_5_3
//
//  Created by wada keisuke on 2020/04/14.
//  Copyright © 2020 wada keisuke. All rights reserved.
//

#ifndef EX2_1_1_hpp
#define EX2_1_1_hpp

#include <iostream>


class Box{
    double SideLen;
    double VerticalLen;
    double Height;
public:
    Box(double side_len, double vertical_len, double height):
        SideLen(side_len), VerticalLen(vertical_len), Height(height)
        {}
    double Volume(){return SideLen * VerticalLen * Height;};
};


#endif /* EX1_5_3_hpp */
