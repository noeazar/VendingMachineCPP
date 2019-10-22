//
// Created by buck.spencer on 2019-10-21.
//

#include "Vending.h"
#include "Product.h"
#include <sstream>
#include <iomanip>

using namespace std;

string VendingMachine::FormatDisplay(float value) {
    streamObj << fixed;
    streamObj << setprecision(2);
    streamObj << value;
    return streamObj.str();
}

string VendingMachine::GetMessage () {
    if ( product_cost > 0.0 &&  credit > 0.0 ) {
        return "CREDIT: $" + FormatDisplay(credit);
    } else if ( product_cost > 0 && credit < product_cost) {
        return "CREDIT: $" + FormatDisplay(credit);
    } else {
        return this->message;
    }
}

void VendingMachine::InsertCoin(Coin c) {
    this->credit += c.value;
}

void VendingMachine::SelectProduct(Product selected_product){
    this->product_cost = selected_product.value;
}

