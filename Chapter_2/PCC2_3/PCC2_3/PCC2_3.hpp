//
//  EX1_5_2.hpp
//  EX1_5_2
//
//  Created by wada keisuke on 2020/04/14.
//  Copyright © 2020 wada keisuke. All rights reserved.
//


#include <iostream>

class InfoNameAdd {
    std::string Name;
    std::string Address;
public:
    void store(std::string Name, std::string Address);
    void display();
};

void InfoNameAdd::store(std::string Name, std::string Address){
    this->Name = Name;
    this->Address = Address;
}


void InfoNameAdd::display(){
    std::cout << Name << "\n";
    std::cout << Address << "\n";
}

