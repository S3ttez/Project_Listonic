//
// Created by Alex on 03/08/2021.
//

#ifndef LISTONIC_ITEMS_H
#define LISTONIC_ITEMS_H
#include "header.h"

class Items{
public:
    Items(string n, double p) : name(n), price(p){}


private:
    string name;
    double price;
};

#endif //LISTONIC_ITEMS_H
