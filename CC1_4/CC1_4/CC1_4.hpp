//
//  EX1_5_2.hpp
//  EX1_5_2
//
//  Created by wada keisuke on 2020/04/14.
//  Copyright © 2020 wada keisuke. All rights reserved.
//



#include <iostream>
const char* rev_str(char* Str);
const char* rev_str(const char* Str, char* ChangeStr);


const char* rev_str(char* Str){
    
    int len = (int)strlen(Str);
    int range = len / 2;
    for (int i = 0; i < range ; i ++){
        char temp;
        temp = Str[i];
        Str[i] = Str[len - i - 1];
        Str[len - i - 1] = temp;
    }
    return Str;
}

const char* rev_str(const char* Str, char* ChangeStr){
    
    int len = (int)strlen(Str);
    int range = len / 2;
    for (int i = 0; i < range ; i ++){
        char temp;
        temp = Str[i];
        ChangeStr[i] = ChangeStr[len - i - 1];
        ChangeStr[len - i - 1] = temp;
    }
    return ChangeStr;
    
}



