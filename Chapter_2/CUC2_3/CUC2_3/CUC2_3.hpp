#ifndef CUC2_3_hpp
#define CUC2_3_hpp

#include <iostream>
#include <random>

class Dice{
    int Number;
public:
    Dice(){
        std::random_device MakeRnd;     // 非決定的な乱数生成器を生成
        std::mt19937 mt(MakeRnd());     //  メルセンヌ・ツイスタの32ビット版、引数は初期シード値
        std::uniform_int_distribution<> dice(1, 6);
        Number = dice(mt);
    }
    void Roll(){ std::cout << Number << "\n"; }
};



#endif
