#ifndef CUC2_2_hpp
#define CUC2_2_hpp

#include <iostream>

class FeetChangeInch{
    int Feet, Inch;
public:
    FeetChangeInch(int Feet){
        this->Feet = Feet;
        Inch = 12 * Feet;
        std::cout << Inch << "\n";
    }
};



#endif
