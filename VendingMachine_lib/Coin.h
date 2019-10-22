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
        float value;

        explicit Coin(string faceImage) {
            if( faceImage == "Washington" ){
                value = 0.25;
            }else if( faceImage == "Roosevelt" ){
                value = 0.10;
            }else if( faceImage == "Jefferson" ){
                value = 0.05;
            }
            this->faceImage = move(faceImage);
        };
};


#endif //TESTING_TEST_COIN_H
