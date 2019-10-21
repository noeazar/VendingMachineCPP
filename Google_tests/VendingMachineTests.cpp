//
// Created by buck.spencer on 2019-10-21.
//

#include "gtest/gtest.h"
#include "Vending.h"


TEST(VendingMachineTestSuite, ExampleDate){
     VendingMachine vending;

    EXPECT_EQ(vending.GetState(),"INSERT COIN");
    vending.InsertCoins({"weight": 3, "size": "medium"});
    EXPECT_EQ(vending.currentTotal(), 100);

}