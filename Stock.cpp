#ifndef STOCK_CPP
#define STOCK_CPP

#include "Stock.h"
#include <string>
#include <iostream>
using namespace std;

Stock::Stock()
{
    tickerSym = nullptr;
    sharesOwned = 0;
    purchasePrice = 0.0;

}

Stock::Stock(int shares, double purchase, string ticker)
{
    sharesOwned = shares;
    purchasePrice = purchase;
    tickerSym = ticker;

}


std::string Stock::getTickerSymbol()
{
    return tickerSym;
}

int Stock::getSharesOwned()
{
    return sharesOwned;
}

double Stock::getPurchasePrice()
 {
     return purchasePrice;
 }

void Stock::setSharesOwned(int shares)
 {
     sharesOwned = shares;
 }

std::string Stock::toString()
{

    return "Ticker: " + tickerSym + ", shares: " + to_string(sharesOwned) + ", Price: " + to_string(purchasePrice);
}

Stock::Stock(const Stock& other) {
    tickerSym = other.tickerSym;
    sharesOwned = other.sharesOwned;
    purchasePrice = other.purchasePrice;
}

Stock& Stock::operator=(const Stock& other) {
        tickerSym = other.tickerSym;
        sharesOwned = other.sharesOwned;
        purchasePrice = other.purchasePrice;
        return *this;
}

#endif