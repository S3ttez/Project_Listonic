//
// Created by Alex on 17/11/2021.
//
#include "gtest/gtest.h"
#include "../ItemMgr.h"
#include "../ItemMgr.cpp"
#include "../ListMgr.cpp"

TEST(ItemMgr, ObserverTesting){
    ListMgr listMgr;
    ItemMgr itemMgr(&listMgr);
    ASSERT_EQ(1, listMgr.getAccounts());
    Observer *obs;
    listMgr.AddObserver(obs);
    ASSERT_EQ(2, listMgr.getAccounts());
    listMgr.RemoveObserver(obs);
    ASSERT_EQ(1, listMgr.getAccounts());

}