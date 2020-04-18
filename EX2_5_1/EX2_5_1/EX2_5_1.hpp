#ifndef EX2_5_1_hpp
#define EX2_5_1_hpp

#define SIZE 10

#include <iostream>

struct Stack{
    Stack(){
        std::cout << "Generate stack \n";
        tos = 0;
    };
    void push(char ch);
    char pop();
private:
    char stack[SIZE];
    int tos;
};

void Stack::push(char ch){
    if(tos == SIZE) {
        std::cout << "Stack is full \n";
        return;
    }
    stack[tos] = ch;
    tos++;
}

char Stack::pop() {
    if (tos == 0){
        std::cout << "Stack is empty \n";
        return 0;
    }
    tos--;
    return stack[tos];
}

#endif
