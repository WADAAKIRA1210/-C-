#include "EX3_1_2.hpp"

int main(){
    
    CirculationQue Que1, Que2;
    
    Que1.InQue('a');
    Que1.InQue('b');
    Que1.InQue('c');
    
    Que2 = Que1;
    
    Que1.DeQue();
    Que1.DeQue();
    Que1.DeQue();
    Que1.DeQue();
    
    Que2.DeQue();
    Que2.DeQue();
    Que2.DeQue();
    Que2.DeQue();

    return 0;
    
}
