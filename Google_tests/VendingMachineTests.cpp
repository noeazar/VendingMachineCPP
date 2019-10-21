//
// Created by buck.spencer on 2019-10-21.
//

#include "gtest/gtest.h"
#include "Vending.h"


TEST(VendingMachineTestSuite, ShouldDisplayInitalStateMessage){
     VendingMachine vending;

    EXPECT_EQ(vending.GetMessage(),"INSERT COIN");
}