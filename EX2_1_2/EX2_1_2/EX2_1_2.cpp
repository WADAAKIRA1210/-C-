//
//  EX1_5_3.cpp
//  EX1_5_3
//
//  Created by wada keisuke on 2020/04/14.
//  Copyright © 2020 wada keisuke. All rights reserved.
//

#include "EX2_1_2.hpp"

int main(){
    
    StopWatch object;
    
    object.start();
    
    for(int i = 0; i < 10; i++){
        object.show();
    }
    
    object.stop();
    

    return 0;
    
}
