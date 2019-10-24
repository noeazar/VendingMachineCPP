//
// Created by noe.azar.vargas on 10/24/19.
//
#include "gtest/gtest.h"
#include "Coin.h"
#include "Cashier.h"

using namespace std;

TEST(Cashier, ShouldUpdateBalance) {
    Cashier cashier;
    Coin quarter("Washington");

    cashier.AddMoney(quarter);

    EXPECT_EQ(cashier.GetBalance(), 0.25);
}