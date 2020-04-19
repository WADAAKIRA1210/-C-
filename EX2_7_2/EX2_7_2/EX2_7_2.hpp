#ifndef EX2_7_2_hpp
#define EX2_7_2_hpp

#include <iostream>
#include <cstring>
#include <cstdlib>

class strtype{
    char* p;
    int len;
public:
    strtype(const char* ptr){
        len = (int)strlen(ptr);
        p = (char*)malloc(len + 1);
        if(!p) {
            std::cout << "Memory allocation error　\n";
            exit(1);
        }
        strcpy(p, ptr);
    }
    ~strtype(){
        std::cout << "free p \n";
        free(p);
    }
    void show(){
        std::cout << p << "- length : " << len << "\n";
    }
};



#endif
