//
// Created by buck.spencer on 2019-10-21.
//

#include "gtest/gtest.h"
#include "Vending.h"
#include "Coin.h"
#include "Product.h"

TEST(VendingMachineTestSuite, ShouldDisplayInitalStateMessage) {
    VendingMachine vending;
    EXPECT_EQ(vending.GetMessage(), "SELECT PRODUCT: cola - $1.00, chips - $0.50, and candy - $0.65");
}

TEST(VendingMachineTestSuite, ShouldDisplayCurrentCreditIfSelectionIsMade) {
    VendingMachine vending;
    Product cola("cola");
    vending.SelectProduct(cola);

    EXPECT_EQ(vending.GetMessage(), "CREDIT: $0.00");
}

TEST(VendignMachineTestSuite, ShouldRejectPenies) {
    VendingMachine vending;

    Coin penny("Abraham");
    vending.InsertCoin(penny);

    EXPECT_EQ(vending.GetMessage(), "INVALID COIN");
}

TEST(VendignMachineTestSuite, ShouldDisplayTHANKYOUWhenProductIsSelectedAndPaidFor) {
    VendingMachine vending;

    Product cola("cola");
    vending.SelectProduct(cola);

    Coin coin("Washington");
    vending.InsertCoin(coin);
    vending.InsertCoin(coin);
    vending.InsertCoin(coin);
    vending.InsertCoin(coin);

    EXPECT_EQ(vending.GetMessage(), "THANK YOU");
}

TEST(VendignMachineTestSuite, ShouldDisplayTotalCreditValueWhenProductIsNotSelected) {
    VendingMachine vending;

    Coin quarter("Washington");
    Coin nickel("Jefferson");

    vending.InsertCoin(quarter);
    vending.InsertCoin(nickel);

    EXPECT_EQ(vending.GetMessage(), "CREDIT: $0.30");
}

TEST(VendingMachineTestSuite, ShouldPlaceRemainingCoinsInCoinReturn){
    VendingMachine vending;

    Product cola("cola");

    Coin coin("Washington");

    vending.InsertCoin(coin);
    vending.InsertCoin(coin);
    vending.InsertCoin(coin);
    vending.InsertCoin(coin);
    vending.InsertCoin(coin);

    vending.SelectProduct(cola);

    EXPECT_EQ(vending.CoinReturn, 0.25);
}

TEST(VendingMachineTestSuite, ShouldDisplayINSERTCOINAfterCoinReturnIsPressed){
    VendingMachine vending;

    Coin coin("Washington");

    vending.InsertCoin(coin);
    vending.InsertCoin(coin);
    vending.InsertCoin(coin);

    vending.ReturnCoin();

    EXPECT_EQ(vending.GetMessage(), "INSERT COIN");

}