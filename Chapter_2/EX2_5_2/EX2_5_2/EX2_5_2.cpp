#include "EX2_5_2.hpp"

int main(){
    
    Bit i(255);
    
    std::cout << "Bit of origin is " << std::bitset<16>(i.Number)<< "\n";
    std::cout << "Swaped Bit is " << std::bitset<16>(i.SwapByte()) << "\n";
    
    return 0;
}

