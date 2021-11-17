//
// Created by Alex on 03/08/2021.
//
#include "ListMgr.h"

void ListMgr::AddObserver(Observer *obs) {
    accounts.push_back(obs);
}
void ListMgr::RemoveObserver(Observer *obs) {
    accounts.remove(obs);
}
void ListMgr::Notify() {
    for (const auto &iterator: accounts)
        iterator->Update();
}
