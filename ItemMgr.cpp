//
// Created by Alex on 03/08/2021.
//

#include "ItemMgr.h"

void ItemMgr::Update() {;
    cout << "\n" << listMgr->getListName() << "\n";
    cout << "Sold: " << listMgr->getItemsSold() << " items\n";
    cout << "Unsold: " << listMgr->getItemsUnsold() << " items\n";
    cout << "Total price: " << listMgr->getTotalPrice()<< "$\n";
}
ItemMgr::~ItemMgr() {
    listMgr->RemoveObserver(this);
}
