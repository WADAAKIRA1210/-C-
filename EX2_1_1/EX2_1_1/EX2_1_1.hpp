//
//  EX1_5_3.hpp
//  EX1_5_3
//
//  Created by wada keisuke on 2020/04/14.
//  Copyright © 2020 wada keisuke. All rights reserved.
//

#ifndef EX2_1_1_hpp
#define EX2_1_1_hpp

#define SIZE 100

#include <iostream>

class CirculationQue {
    int Index;
    char Que[SIZE];

public:
    CirculationQue():Index(0){}
    void InQue(char c);
    void DeQue();
    
};

void CirculationQue :: InQue(char c){
    if(Index == 100) {
        Index = 0;
        Que[Index] = c;

    }
    else {
        Que[Index] = c;
        Index ++;
    }
    
}

void CirculationQue :: DeQue(){
    
    if(Index - 1 == -1){
        if(Que[99] == '\0'){
            std::cout << "Que is empty \n";
           }
        else{
            std :: cout << Que[Index - 1] ;
            Index = 99;
        }
    }
    else if(Que[Index - 1] == '\0'){
            std::cout << "Que is empty \n";
    }
    else {
        std :: cout << Que[Index - 1] << "\n";
        Index --;
    }
}




#endif /* EX1_5_3_hpp */
