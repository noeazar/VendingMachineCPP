//
// Created by buck.spencer on 2019-10-21.
//
#include <string>
#include "Coin.h"
#include "Product.h"
#include <sstream>

using namespace std;

#ifndef VENDINGMACHINECPP_VENDING_H
#define VENDINGMACHINECPP_VENDING_H


class VendingMachine {

protected:
    float credit = 0.0;
    float product_cost = 0.0;

public:
    ostringstream streamObj;

    VendingMachine() {};

    string message = "SELECT PRODUCT: cola - $1.00, chips - $0.50, and candy - $0.65";

    string GetMessage();

    void InsertCoin(Coin c);

    void SelectProduct(Product value);

private:
    string FormatDisplay(float credit);
};


#endif //VENDINGMACHINECPP_VENDING_H
