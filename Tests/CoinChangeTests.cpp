//
// Created by noe.azar.vargas on 10/23/19.
//
#include "gtest/gtest.h"
#include "Vending.h"
#include "Coin.h"
#include "Product.h"
#include<vector>
#include<list>

using namespace std;

//static auto Total(const Coin coins[]) {
//    auto total = 0;
//    int num_elements = sizeof( coins ) / sizeof( coins[0] );
//
//    for(int i=0; i <= num_elements ; i++) {
//        total += coins[i].value;
//    }
//
//    return total;
//};

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
    vector<Coin> returned_coins = vending.GetCoinReturn();
    EXPECT_EQ(vending.GetCoinReturn()[0].value,  0.25);

    EXPECT_EQ(vending.GetCoinReturn().size(), 1);
}



