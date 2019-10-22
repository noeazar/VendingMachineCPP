//
// Created by buck.spencer on 2019-10-21.
//

#include "Vending.h"
#include <math.h>

using namespace std;

string VendingMachine::GetMessage () {
    int cred = printf("%.002f", credit);;
    if ( credit > 0.0 ) {
        return "CREDIT: $" + std::to_string( cred );
    } else {
        return this->message;
    }

}


