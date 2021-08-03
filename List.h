//
// Created by Alex on 03/08/2021.
//

#ifndef LISTONIC_LIST_H
#define LISTONIC_LIST_H
#include "header.h"

class List{
public:
    List(string n) : name(n){};
    virtual ~List();

private:
    string name;
};


#endif //LISTONIC_LIST_H
