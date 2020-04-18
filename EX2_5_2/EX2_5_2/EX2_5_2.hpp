#ifndef EX2_5_2_hpp
#define EX2_5_2_hpp

#include <iostream>
#include <bitset>

union Bit{
    char Bytes[2]; //char is 1byte. So this is 2byte.
    unsigned Number;
    Bit(unsigned i):Number(i){}
    unsigned SwapByte();
};

unsigned Bit::SwapByte(){
    
    char temp;
    temp = Bytes[0];
    Bytes[0] = Bytes[1];
    Bytes[1] = temp;
    
    return Number;
}

#endif
