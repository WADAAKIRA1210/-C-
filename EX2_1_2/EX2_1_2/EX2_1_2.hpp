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
#include <ctime>

class StopWatch {
public:
    clock_t ProgramStart;
    clock_t MeasurementStart;
    StopWatch();
    ~StopWatch();
    void start();
    void stop();
    void show();
};

StopWatch::StopWatch(){
    ProgramStart = clock();
    MeasurementStart = 0;
}
StopWatch::~StopWatch(){
    clock_t Time = clock() - ProgramStart;
    std::cout << "Program End Time : " << Time / CLOCKS_PER_SEC << "\n";
}

void StopWatch::start(){
    MeasurementStart = clock();
    std::cout << "Start measurement \n";
}
void StopWatch::stop(){
    clock_t Time = clock() - MeasurementStart;
    std::cout << "Measured Time : " << Time / CLOCKS_PER_SEC << "\n";
}
void StopWatch::show(){
    clock_t Time = clock() - MeasurementStart;
    std::cout << "Elapsed Time : " << Time / CLOCKS_PER_SEC << "\n";
}
#endif /* EX1_5_3_hpp */
