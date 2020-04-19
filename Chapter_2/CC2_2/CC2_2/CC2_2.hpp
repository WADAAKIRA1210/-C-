#ifndef CC2_2_hpp
#define CC2_2_hpp

#include <iostream>

class Lines {
    int Length;
    char* Line;
public:
    Lines(int Length){
        this->Length = Length;
        Line = (char*)malloc(Length + 1);
        for(int i = 0; i < Length; i++){
            Line[i] = '*';
        }
        std::cout << Line << "\n";
    }
    ~Lines(){
        free(Line);
    }
};

#endif
