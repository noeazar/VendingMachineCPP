//
// Created by buck.spencer on 2019-10-21.
//
#include <string>
#include "Coin.h"
#include "Product.h"
#include <sstream>

using namespace std;

class VendingMachine {

public:
    VendingMachine() = default;

    long double coin_return = 0.0;
    bool exact_change_only = false;
    string message = "SELECT PRODUCT: cola - $1.00, chips - $0.50, and candy - $0.65";

    void ClearCoinReturn();
    string GetMessage();
    void InsertCoin(const Coin& c);
    void ReturnCoin();
    void SelectProduct(const Product& value);
    static vector<Coin> GetCoinReturn();

protected:
    long double credit = 0;
    long double product_cost = 0;

private:
    string FormatDisplay(long double credit);
};

