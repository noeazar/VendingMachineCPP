//
// Created by buck.spencer on 2019-10-21.
//
#include <string>
#include "Coin.h"
#include <sstream>

using namespace std;

#ifndef VENDINGMACHINECPP_VENDING_H
#define VENDINGMACHINECPP_VENDING_H


class VendingMachine {

protected:
    float credit;

public:
    ostringstream streamObj;

    VendingMachine() {};

    string message = "INSERT COIN";

    string GetMessage();

    void InsertCoin(Coin c) {
        this->credit = 0.25;
    }

private:
    string FormatDisplay(float credit);
};


#endif //VENDINGMACHINECPP_VENDING_H
