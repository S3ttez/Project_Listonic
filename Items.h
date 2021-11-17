//
// Created by Alex on 03/08/2021.
//
#ifndef LISTONIC_ITEMS_H
#define LISTONIC_ITEMS_H
#include "header.h"

class Items{
public:
    explicit Items(string n="", string cObj="", int q=1, float p=0.00f, bool b=false) :
    name(n), categoryObj(cObj), quantity(q), price(p), bought(b){}

    ~Items()=default;

    bool operator == (const Items& other){
        return name==other.name;
    }

    const string &getName() const{
        return name;
    }

    const string &getCategory() const{
        return categoryObj;
    }

    float getPrice() const {
        return price;
    }

    int getQuantity() const {
        return quantity;
    };

    void setCategory(const string &cObj){
        this->categoryObj=cObj;
    }
    void setPrice(float p);

    void setQuantity(int q);

    bool isBought() const {
        return bought;
    }

    void setBought(bool b){
        this->bought=b;
    }

    float getTotalPrice() const {
        return (this->getPrice())*(static_cast<float>(this->getQuantity()));
    }
private:
    string name, categoryObj;
    float price;
    int quantity;
    bool bought;
};
#endif //LISTONIC_ITEMS_H
