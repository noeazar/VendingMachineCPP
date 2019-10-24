#include <utility>

//
// Created by noe.azar.vargas on 10/21/19.
//

#ifndef COIN_H
#define COIN_H

#include <string>
using namespace std;

class Coin {
public:
    string faceImage;
    long double value = 0.0;

    explicit Coin(string faceImage) {
        if (faceImage == "Washington") {
            value = 0.25;
        } else if (faceImage == "Roosevelt") {
            value = 0.10;
        } else if (faceImage == "Jefferson") {
            value = 0.05;
        }
        this->faceImage = move(faceImage);
    };
};


#endif //COIN_H
