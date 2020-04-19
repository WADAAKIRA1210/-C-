//
//  EX1_5_2.cpp
//  EX1_5_2
//
//  Created by wada keisuke on 2020/04/14.
//  Copyright © 2020 wada keisuke. All rights reserved.
//

#include <iostream>

char min(char x, char y);
int min(int x, int y);
double min(double x, double y);

int main(){
   
    std::cout << min('x', 'y') << "\n";
    std::cout << min(100, 200) << "\n";
    std::cout << min(100.01, 100.02) << "\n";
    
    return 0;
}

char min(char x, char y){
    if(x > y){return y;}
    else {
        return x;
    }
}

int min(int x, int y){
    if(x > y){return y;}
    else {
        return x;
    }
}

double min(double x, double y){
    if(x > y){return y;}
    else {
        return x;
    }
}
