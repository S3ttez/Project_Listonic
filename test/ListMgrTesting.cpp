//
// Created by Alex on 26/11/2021.
//

#include "gtest/gtest.h"
#include "../Items.h"
#include "../ListMgr.h"

class ListMgrTesting : public ::testing::Test {
protected:
    void SetUp() override {
        listMgr.setListName("");
    }
    void TearDown() override {}
    ListMgr listMgr;
};

TEST_F(ListMgrTesting, BuyTesting){
    Items item1("apple", "", 3, 2, false);
    Items item2("onion", "", 6, 0.5, false);
    Items item3("octopus", "", 1, 15.4, true);
    listMgr.addItem(item1);
    listMgr.addItem(item2);
    listMgr.addItem(item3);
    ASSERT_EQ(listMgr.getItemsSold(),1);
    ASSERT_EQ(listMgr.getItemsUnsold(),2);
    listMgr.removeItem(item2);
    Items item4("chicken","",2,5,true);
    listMgr.addItem(item4);
    ASSERT_EQ(listMgr.getItemsUnsold(),1);
    ASSERT_EQ(listMgr.getItemsSold(),2);
}

TEST_F(ListMgrTesting, SizeAddRemoveListTesting) {
    Items item1("1");
    Items item2("2");
    Items item3("3");
    listMgr.addItem(item1);
    listMgr.addItem(item2);
    listMgr.addItem(item3);
    ASSERT_EQ(3, listMgr.getSize());
    listMgr.removeItem(item2);
    listMgr.removeItem(item1);
    ASSERT_EQ(1, listMgr.getSize());

}

TEST_F(ListMgrTesting, CategoryTesting){
    listMgr.setListName("[Meat List]");
    ASSERT_EQ("[Meat List]", listMgr.getListName());
}

TEST_F(ListMgrTesting, PriceTesting){
    Items item1("morcov", "", 3, 2, true);
    Items item2("garlic", "", 6, 1, true);
    Items item3("mango", "", 1, 15, true);
    listMgr.addItem(item1);
    listMgr.addItem(item2);
    listMgr.addItem(item3);
    ASSERT_EQ(listMgr.getTotalPrice(),27);
    listMgr.removeItem(item1);
    ASSERT_EQ(listMgr.getTotalPrice(),21);
}
