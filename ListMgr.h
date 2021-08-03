//
// Created by Alex on 03/08/2021.
//

#ifndef LISTONIC_LISTMGR_H
#define LISTONIC_LISTMGR_H

#include "header.h"
#include "Observer.h"
#include "Subject.h"
#include "List.h"

class ListMgr : public Subject{
public:
    ListMgr();
    virtual ~ListMgr();
    vector<List> lists;

    void addList(List list){
        lists.push_back(list);
        Notify();
    }

    virtual void Notify() {
        for (std::list<Observer *>::const_iterator itr = observers.begin(); itr != observers.end(); itr++){
            (*itr)->Update();
        }
    }

    virtual void AddObserver(Observer* obs){
        observers.push_back(obs);
        Notify();
    }

    virtual void RemoveObserver(Observer* obs){
        observers.remove(obs);
        Notify();
    }

    list<Observer*> observers;
};


#endif //LISTONIC_LISTMGR_H
