#ifndef CUC2_1_hpp
#define CUC2_1_hpp

#include <iostream>
//#include <AppKit/AppKit.h>

class Prompt{
    int Count;
public:
    Prompt(const char* str){
        std::cout << str << "\n";
        std::cin >> Count;
    }
    ~Prompt(){
       for(int i = 0; i < Count; i++) std::cout << "\007";
    }
    
};



#endif
