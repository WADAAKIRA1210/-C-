//
//  EX1_5_3.cpp
//  EX1_5_3
//
//  Created by wada keisuke on 2020/04/14.
//  Copyright © 2020 wada keisuke. All rights reserved.
//

#include "EX2_2_2.hpp"

int main(){
    
    std::tm* Date;
    std::time_t timer;
    timer = time(NULL);
    Date = localtime(&timer);
    
    TimeAndDay object(Date->tm_mon + 1, Date->tm_mday, Date->tm_hour, Date->tm_min);
    object.Show();
    
    return 0;
}
