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

class Stack{
    char* stack;
    int tos;
    int size;
    char who;
public:
    Stack(int size);
    ~Stack();
    void push(char ch);
    char pop();
};

Stack :: Stack(int size){
    stack = (char* )malloc(size);
    tos = 0;
    this->size = size;
}

Stack :: ~Stack(){
    std::cout << "memory free\n";
}

void Stack ::push(char ch){
    if(tos == size) {
        std::cout  << "stack is full. \n";
        return;
    }
    stack[tos] = ch;
    tos++;
}

char Stack:: pop(){
    if(tos == 0){
        std::cout<<"stack is empty. \n";
        return 0;
    }
    tos--;
    std::cout << stack[tos] << "\n";
    return stack[tos];
}
#endif /* EX1_5_3_hpp */
