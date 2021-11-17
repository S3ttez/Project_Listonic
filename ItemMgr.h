//
// Created by Alex on 03/08/2021.
//

#ifndef LISTONIC_ITEMMGR_H
#define LISTONIC_ITEMMGR_H

#include "Observer.h"
#include "ListMgr.h"

class ItemMgr : public Observer {
public:
    explicit ItemMgr(ListMgr* listMgr) : listMgr(listMgr){
        listMgr->AddObserver(this);
    }
    ~ItemMgr() override;

    void Update() override;

private:
    ListMgr* listMgr{};
};
#endif //LISTONIC_ITEMMGR_H
