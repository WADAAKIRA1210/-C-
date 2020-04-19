#include "CC2_4.hpp"

int main(){
    
    Isosceles object1(5.0, 3.0);
    Rectangle object2(5.5, 3.0);
    Cylinder  object3(5.5, 3.0);
    
    std::cout << "Area of isosceles is " << object1.Area() << "\n";
    std::cout << "Area of rectangle is " << object2.Area() << "\n";
    std::cout << "Area of cylinder is "  << object3.Area() << "\n";
    
    return 0;
}

