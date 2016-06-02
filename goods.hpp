//
//  goods.hpp
//  xiaofan2.0
//
//  Created by 李子晨 on 16/4/6.
//  Copyright © 2016年 李子晨. All rights reserved.
//

#ifndef goods_hpp
#define goods_hpp

#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Goods {
public:
    
    //构造函数
    Goods (string _name, double _price) {
        name = _name;
        price = _price;
    }
    
    void setName (string _name) {
        name = _name;
    }
    string getName (void) {
        return name;
    }
    
    void setPrice (double _price) {
        price = _price;
    }
    double getPrice (void) {
        return price;
    }
    
private:
    string name;
    double price;
    
};
class Basket {
public:
    void addGoods ( Goods newgoods) {
        goodslist.push_back(newgoods);
    }
    void clear(void) {
        goodslist.clear();
    }
    bool isEmpty (void) {
        if (goodslist.begin() == goodslist.end()) {
            return 1;
        } else {
            return 0;
        }
    }
    double getTotalPrice (void) {
        double result = 0;
        auto beg = goodslist.begin();
        auto end = goodslist.end();
        while (beg != end) {
            result += (*beg).getPrice();
            ++beg;
        }
        return result;
    }
    vector<Goods> getGoodsList(void) {
        return goodslist;
    }
private:
    vector<Goods> goodslist;
    
};
/*class Store {
public:
    void display menu(void) {
        cout << msg_header <<endl;
        auto beg = goods.begin();
        auto end = goods.end();
        while (beg != end) {
            cout << (*beg).getName();
            cout << "     " << (*beg).getPrice() << endl;
            ++beg;
        }
        cout << msg_footer << endl;
    }
    void addGoods(int ) {
        
    }
private:
    vector<Goods> goods;
    Basket basket;
    string msg_header = "****************************\nwelcome to xiaofan de store\n****************************\n";
    string msg_footer = "(9)check out \n(0)exit\n-----------------------\nplease select a number";
};*/
#endif /* goods_hpp */
