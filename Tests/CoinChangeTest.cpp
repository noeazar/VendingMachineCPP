//
// Created by noe.azar.vargas on 10/23/19.
//
#include "gtest/gtest.h"
#include "Vending.h"
#include "Product.h"
#include<vector>
#include<list>

using namespace std;

TEST(VendingMachineTestSuite, ShouldBeZeroWhenGetChangeIsCalled){
    VendingMachine vending;

    vending.coin_return = .25;

    vending.ClearCoinReturn();

    EXPECT_EQ(vending.coin_return, 0.0);
}

TEST(CoinChange, ShouldReturnChange) {
    VendingMachine vending;
    Coin quarter("Washington");
    Product chips("chips");

    vending.InsertCoin(quarter);
    vending.InsertCoin(quarter);
    vending.InsertCoin(quarter);
    vending.SelectProduct(chips);

    list<Coin> change = {quarter};
    EXPECT_EQ(vending.coin_return,  0.25);
}

TEST(CoinChange, ShouldReturnCorrectChange) {
    VendingMachine vending;
    Coin quarter("Washington");
    Product chips("chips");

    vending.InsertCoin(quarter);
    vending.InsertCoin(quarter);
    vending.InsertCoin(quarter);
    vending.SelectProduct(chips);

    vector<Coin> change = {quarter};
    vector<Coin> returned_coins = VendingMachine::GetCoinReturn();
    EXPECT_EQ(vending.GetCoinReturn()[0].value,  0.25);

    EXPECT_EQ(vending.GetCoinReturn().size(), 1);
}



