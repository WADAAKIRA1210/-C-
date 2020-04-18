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


class AreaCl{
public:
    double Height;
    double Width;
    AreaCl(double height, double width):Height(height), Width(width){}
};

class Rectangle : public AreaCl{
public:
    Rectangle(double height, double width):AreaCl(height, width){}
    double Area(){ return Height * Width; }
};

class Isosceles : public AreaCl{
public:
    Isosceles(double height, double width):AreaCl(height, width){}
    double Area(){ return Height * Width / 2; }
};


#endif /* EX1_5_3_hpp */
