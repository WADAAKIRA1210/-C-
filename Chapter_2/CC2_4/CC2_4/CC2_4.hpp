#ifndef CC2_4_hpp
#define CC2_4_hpp

#define PI 3.14159265359
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

class Cylinder : public AreaCl{
public:
    Cylinder(double height, double width):AreaCl(height, width){}
    double Area(){ return 2 * PI * (Width / 2) * (Width / 2) + PI * Width * Height ; }
    
};

#endif
