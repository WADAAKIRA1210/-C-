//
//  EX1_5_2.cpp
//  EX1_5_2
//
//  Created by wada keisuke on 2020/04/14.
//  Copyright © 2020 wada keisuke. All rights reserved.
//

#include "EX1_5_2.hpp"

int main(){
    
    std::string Title, Author;
    int Stock;
    
    std::cout << "input BookTitle, Author and Stock \n";
    std::cin >> Title >> Author >> Stock;
    
    Card Object;
    
    Object.store(Title, Author, Stock);
    Object.show();
    
    
    
    return 0;
    
}
