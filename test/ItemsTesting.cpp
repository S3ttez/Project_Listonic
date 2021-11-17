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