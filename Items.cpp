//
// Created by Alex on 03/08/2021.
//
#include "Items.h"


void Items::setPrice(float p) {
    if (p >= 0) {
        this->price = p;
    }
    else
        throw invalid_argument("Error input");
}

void Items::setQuantity(int q) {
    if (q > 0)
        this->quantity = q;
    else
        throw invalid_argument("Error input");
}
