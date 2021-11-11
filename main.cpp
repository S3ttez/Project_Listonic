#include "header.h"
#include <iostream>
#include "ItemMgr.h"

int main() {

    ListMgr list1; //Meat products
    ListMgr list2; //Vegetable products
    ListMgr list3; //Milk products

    list1.setListName("[MEAT PRODUCTS]");
    list2.setListName("[VEGETABLE PRODUCTS]");
    list3.setListName("[MILK PRODUCTS]");

    ItemMgr Meat(&list1);
    ItemMgr Vegetable(&list2);
    ItemMgr Milk(&list3);

    Items item1("Chicken", "Meat Product", 2, 5, true);
    Items item2("Onion", "Vegetable Product", 10, 0.3, true);
    Items item3("Gorgonzola", "Milk Product", 1, 14,true);

    list1.addItem(item1);
    list2.addItem(item2);
    list3.addItem(item3);

    //Category, Price, Quantity, Bought
    Items item4("Spicy Chicken", "Meat Product", 1, 5,false);
    list1.addItem(item4);
    item4.setCategory("[LIMITED EDITION]");
    item4.setPrice(8);
    item4.setQuantity(2);
    item4.setBought(true);
    item4.isBought();
    list1.removeItem(item4); //soldout

    return 0;
}
