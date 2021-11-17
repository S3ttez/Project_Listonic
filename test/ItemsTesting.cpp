//
// Created by Alex on 17/11/2021.
//

#include "gtest/gtest.h"
#include "../Items.h"
#include "../Items.cpp"

class ItemsTesting : public ::testing::Test {
public:
    void SetUp() override {
        q.setQuantity(0);
        p.setPrice(0);
    }
    void TearDown() override {}
    Items q;
    Items p;
};

TEST(Items, ItemsConstructorTesting){
    Items i;
    ASSERT_EQ("",i.getName());
    ASSERT_EQ("",i.getCategory());
    ASSERT_EQ(0,i.getPrice());
    ASSERT_EQ(1,i.getQuantity());
    ASSERT_FALSE(i.isBought());
}


TEST_F(ItemsTesting, QuantityTestingMethod){
    ASSERT_THROW({
        try{
            q.setQuantity(-5);
        }
        catch(const invalid_argument& e){
            ASSERT_STREQ("Error input. Change!", e.what());
            throw;
        }
        },invalid_argument);
}

TEST_F(ItemsTesting, PriceTestingMethod){
    ASSERT_THROW({
        try{
            p.setPrice(-3);
        }
        catch(const invalid_argument& e){
            ASSERT_STREQ("Error input. Change!", e.what());
            throw;
        }
        },invalid_argument);
}