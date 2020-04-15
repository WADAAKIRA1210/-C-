//
//  EX1_5_3.hpp
//  EX1_5_3
//
//  Created by wada keisuke on 2020/04/14.
//  Copyright © 2020 wada keisuke. All rights reserved.
//

#ifndef EX2_1_1_hpp
#define EX2_1_1_hpp

#include <iostream>
#include <iomanip>
#include <ctime>

class TimeAndDay{
    int Month;
    int Day;
    int Hour;
    int Min;
public:
    TimeAndDay(int month, int day, int hour, int min):
        Month(month), Day(day), Hour(hour), Min(min)
        {}
    void Show();
};

void TimeAndDay::Show(){
    std::cout << "Date is " << Month << " : " << Day << "\n"
    << "Time is " << std::setprecision(02) << Hour << " : " << std::setprecision(02) << Min << "\n";
}


#endif /* EX1_5_3_hpp */
