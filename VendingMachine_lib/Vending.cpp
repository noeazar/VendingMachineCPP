//
// Created by buck.spencer on 2019-10-21.
//

#include "Vending.h"
#include <sstream>
#include <iomanip>

using namespace std;

string VendingMachine::GetMessage () {
    if ( credit > 0.0 ) {
        return "CREDIT: $" + FormatDisplay(credit);
    } else {
        return this->message;
    }

}

string VendingMachine::FormatDisplay(float value) {
    streamObj << fixed;
    streamObj << setprecision(2);
    streamObj << value;
    return streamObj.str();
}

void VendingMachine::InsertCoin(Coin c) {
    this->credit += c.value;
}


