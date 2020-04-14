//
//  EX1_5_2.hpp
//  EX1_5_2
//
//  Created by wada keisuke on 2020/04/14.
//  Copyright © 2020 wada keisuke. All rights reserved.
//

#ifndef EX1_5_2_hpp
#define EX1_5_2_hpp

#include <iostream>

class Card {
    std::string Title;
    std::string Author;
    int Stock;
public:

    void store(std::string Title, std::string Author, int Stock);
    void show();
    
};

void Card::store(std::string Title, std::string Author, int Stock){
    this->Title = Title;
    this->Author = Author;
    this->Stock = Stock;
}


void Card::show(){
    std::cout<< "Book title is "<< Title <<"\n"
    <<"Author is " << Author <<"\n"
    <<"Stock is " << Stock <<"\n";
}


#endif /* EX1_5_2_hpp */
