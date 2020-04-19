
#include <iostream>
#include <sstream>
#include <unistd.h>
char* sleep(const char* Time);
//int sleep(int Time);

int main(){

    std::cout << "stop 10 second.\n";
    sleep(10);

    std::cout << "stop 10 second.\n";
    sleep("10");

    
}

char* sleep(const char* Time){
    int time;
    time = atoi(Time);
    sleep(time);
    return 0;
}

