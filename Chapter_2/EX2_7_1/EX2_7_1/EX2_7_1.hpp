#ifndef EX2_7_1_hpp
#define EX2_7_1_hpp
#define SIZE 10


#include <iostream>

class Stack{
    char stack[SIZE];
    int tos;
public:
    Stack(){
        tos = 0;
    };
    void push(char ch){
        if(tos == SIZE) {
            std::cout << "Stack is full \n";
            return;
        }
        stack[tos] = ch;
        tos++;
    }
    char pop(){
        if (tos == 0){
            std::cout << "Stack is empty \n";
            return 0;
        }
        tos--;
        return stack[tos];
    }
};


#endif
