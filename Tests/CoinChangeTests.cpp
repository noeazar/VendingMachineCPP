//
// Created by noe.azar.vargas on 10/23/19.
//
#include "gtest/gtest.h"
#include "Vending.h"
#include "Coin.h"
#include "Product.h"
#include<list>

using namespace std;

static auto Total(const Coin coins[]) {
    auto total = 0;
    auto size = *(&coins + 1) - coins;

    for(int i=0; i <= size ; i++) {
        total += coins[i].value;
    }

    return total;
};

TEST(CoinChange, ShouldReturnChange) {
    VendingMachine vending;
    Coin quarter("Washington");
    Product chips("chips");

    vending.InsertCoin(quarter);
    vending.InsertCoin(quarter);
    vending.InsertCoin(quarter);
    vending.SelectProduct(chips);

    list<Coin> change = {quarter};
    EXPECT_EQ(Total(vending.GetCoinReturn()),  0.50);
}



