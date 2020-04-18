#include "EX2_6_1.hpp"

inline int Absolute(int n){
    std::cout << " For integier \n";
    return n < 0 ? -n : n;
}

inline long Absolute(long n){
    std::cout << " For long integier \n";
    return n < 0 ? -n : n;
}

inline double Absolute(double n){
    std::cout << " For double \n";
    return n < 0 ? -n : n;
}

int main(){
    
    std::cout << "Absolute of -10 : " << Absolute(-10) << "\n\n";
    std::cout << "Absolute of -10L : " << Absolute(-10L) << "\n\n";
    std::cout << "Absolute of -10.01 : " << Absolute(-10.01) << "\n\n";
    
    return 0;
}

