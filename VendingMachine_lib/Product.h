//
// Created by buck.spencer on 2019-10-22.
//

#ifndef TESTING_TEST_PRODUCT_H
#define TESTING_TEST_PRODUCT_H

using namespace std;

class Product {
public:
    string type;
    float value;
    bool in_stock = true;

    explicit Product(const string& val) {
        if (val == "cola") {
            value = 1.00;
        } else if (val == "chips") {
            value = 0.50;
        } else if (val == "candy") {
            value = 0.65;
        }
        this->type = move(type);
    };

};

#endif //TESTING_TEST_PRODUCT_H
