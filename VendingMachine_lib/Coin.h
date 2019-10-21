#include <utility>

//
// Created by noe.azar.vargas on 10/21/19.
//

#ifndef TESTING_TEST_COIN_H
#define TESTING_TEST_COIN_H

using namespace std;

class Coin {
    public:
        string faceImage;

        explicit Coin(string faceImage) {
            this->faceImage = move(faceImage);
        };

        string GetImage() {
            return this->faceImage;
        }
};


#endif //TESTING_TEST_COIN_H
