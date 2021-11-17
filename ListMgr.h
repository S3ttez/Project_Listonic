//
// Created by Alex on 03/08/2021.
//

#ifndef LISTONIC_LIST_H
#define LISTONIC_LIST_H
#include <string>
#include "header.h"
#include "Items.h"
#include "Subject.h"

class ListMgr : public Subject{
public:
    explicit ListMgr(string listN="") : listName(move(listN)) {};
    ~ListMgr() override = default;

    void AddObserver(Observer* obs) override;
    void RemoveObserver(Observer* obs) override;
    void Notify() override;

    void addItem(const Items& newItem){
        string name = newItem.getName();
        shopList.insert(make_pair(name, newItem));
        Notify();
    }

    void removeItem(const Items& deleteItem){
        auto iterator = shopList.find(deleteItem.getName());
        if (iterator != shopList.end()) {
            shopList.erase(iterator);
            Notify();
        }
    }

    void setListName(const string &l){
        this->listName=l;
    }

    int getItemsSold() const{
        int b = 0;
        for (const auto &it: shopList) {
            if (it.second.isBought())
                b++;
        }
        return b;
    }

    int getItemsUnsold() const{
        int u = 0;
        for (const auto &it: shopList) {
            if (!it.second.isBought())
                u++;
        }
        return u;
    }

    float getTotalPrice() const {
        float total = 0;
        for (const auto &it: shopList) {
            if (it.second.isBought())
                total += it.second.getTotalPrice();
        }
        return total;
    }

    const string &getListName() const {
        return listName;
    }

    int getAccounts(){
        return accounts.size();
    }

private:
    string listName;
    list<Observer*> accounts;
    multimap<string,Items> shopList;
};


#endif //LISTONIC_LIST_H
