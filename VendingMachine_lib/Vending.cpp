//
// Created by buck.spencer on 2019-10-21.
//

#include "Vending.h"
#include "Product.h"
#include <sstream>
#include <iomanip>

using namespace std;

string VendingMachine::FormatDisplay(long double value) {
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(2) << value;
    return oss.str();
}

string VendingMachine::GetMessage() {
    if (exact_change_only == true) {
        return "EXACT CHANGE ONLY";
    }

    if (product_cost > 0.0) {
        long double difference = product_cost - credit;

        if (credit >= product_cost) {
            this->credit = 0.0;
            this->product_cost = 0.0;
            return "THANK YOU";
        } else if (credit > 0.0) {
            string stringified_value = FormatDisplay(difference);
            return "AMOUNT DUE: $" + FormatDisplay(difference);
        } else if (credit < product_cost) {
            return "AMOUNT DUE: $" + FormatDisplay(difference);
        }
    }

    if (product_cost == 0 && credit > 0) {
        return "CREDIT: $" + FormatDisplay(credit);
    }

    return this->message;
}

void VendingMachine::InsertCoin(const Coin &c) {
    if (c.value == 0.0) {
        this->message = "INVALID COIN";
    }
    this->credit += c.value;
}

void VendingMachine::SelectProduct(const Product &selected_product) {
    if (selected_product.in_stock) {
        if (selected_product.value < credit) {
            coin_return = credit - selected_product.value;
        }
        this->product_cost = selected_product.value;
    } else {
        this->message = "SOLD OUT";
    }

}

void VendingMachine::ReturnCoin() {
    this->credit = 0.00;
    this->product_cost = 0.00;
}

Coin * VendingMachine::GetCoinReturn() {
    Coin quarter("Washington");
    Coin change[] = {quarter};
    return change;
}
