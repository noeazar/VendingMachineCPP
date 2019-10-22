//
// Created by buck.spencer on 2019-10-21.
//

#include "gtest/gtest.h"
#include "Vending.h"
#include "Coin.h"

TEST(VendingMachineTestSuite, ShouldDisplayInitalStateMessage) {
    VendingMachine vending;
    EXPECT_EQ(vending.GetMessage(), "INSERT COIN");
}

TEST(VendignMachineTestSuite, ShouldDisplayCoinValue) {
    VendingMachine vending;

    Coin coin("Washington");
    vending.InsertCoin(coin);

    EXPECT_EQ(vending.GetMessage(), "CREDIT: $0.25");
}