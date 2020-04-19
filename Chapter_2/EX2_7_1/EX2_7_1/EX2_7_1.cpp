#include "EX2_7_1.hpp"

int main(){
    
    Stack stack1, stack2;
    
    stack1.push('a');
    stack2.push('x');
    stack1.push('b');
    stack2.push('y');
    stack1.push('c');
    stack2.push('z');
    
    for(int i = 0; i < 3; i++) std::cout << "stack1 pop : " << stack1.pop() << "\n";
    for(int i = 0; i < 3; i++) std::cout << "stack2 pop : " << stack2.pop() << "\n";
    
    return 0;
}

