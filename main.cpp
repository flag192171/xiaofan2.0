//
//  main.cpp
//  xiaofan2.0
//
//  Created by 李子晨 on 16/4/6.
//  Copyright © 2016年 李子晨. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include "goods.hpp"
int main(int argc, const char * argv[]) {
    vector<Goods> goods;
    Goods good1("cpp", 233);
    goods.push_back(good1);
    Goods good2("c  ", 666);
    goods.push_back(good2);
    Goods good3("java ", 555);
    goods.push_back(good3);
    Goods good4("php  ", 1.5);
    goods.push_back(good4);
    

    
    std::cout << "Hello, World!\n";
    return 0;
}
