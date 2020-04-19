//
//  EX1_5_3.cpp
//  EX1_5_3
//
//  Created by wada keisuke on 2020/04/14.
//  Copyright © 2020 wada keisuke. All rights reserved.
//

#include "EX2_1_1.hpp"

int main(){
    
    CirculationQue Que;
    
    Que.InQue('a');
    Que.InQue('b');
    Que.InQue('c');
    
    Que.DeQue();
    Que.DeQue();
    Que.DeQue();
    Que.DeQue();
    
    return 0;
    
}
