//
// Created by buck.spencer on 2019-10-21.
//

#include "Vending.h"
#include <sstream>

using namespace std;

string VendingMachine::GetMessage () {

    if ( credit > 0.0 ) {
        return "CREDIT: $" + FormatDisplay(credit);
    } else {
        return this->message;
    }

}

string VendingMachine::FormatDisplay(float credit) {
    streamObj << credit;
    return streamObj.str();
}

void VendingMachine::InsertCoin(Coin c) {
    int val = credit + c.value;
    this->credit = val;
}


