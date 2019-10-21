//
// Created by buck.spencer on 2019-10-21.
//
#include <string>

using std::string;

#ifndef VENDINGMACHINECPP_VENDING_H
#define VENDINGMACHINECPP_VENDING_H


class VendingMachine {


public:
    VendingMachine() {};
    string Display = "INSERT COIN";

    string getState();
};


#endif //VENDINGMACHINECPP_VENDING_H
