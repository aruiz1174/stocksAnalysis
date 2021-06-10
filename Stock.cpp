#ifndef STOCK_CPP
#define STOCK_CPP

#include "Stock.h"
#include <string>

Stock::Stock() {
    tickerSym = nullptr;
    sharesOwned = 0;
    purchasePrice = 0.0;

}

//copy constructor
Stock::Stock(const Stock& other) {
    tickerSym = other.tickerSym;
    sharesOwned = other.sharesOwned;
    purchasePrice = other.purchasePrice;
}

//= overload constructor
Stock& Stock::operator=(const Stock& other) {
    tickerSym = other.tickerSym;
    sharesOwned = other.sharesOwned;
    purchasePrice = other.purchasePrice;
    return *this;
}

Stock::Stock(int shares, double purchase, std::string ticker) {
    sharesOwned = shares;
    purchasePrice = purchase;
    tickerSym = ticker;
}


std::string Stock::getTickerSymbol() {
    return tickerSym;
}

int Stock::getSharesOwned() {
    return sharesOwned;
}

double Stock::getPurchasePrice() {
    return purchasePrice;
}

void Stock::setSharesOwned(int shares) {
    sharesOwned = shares;
}

std::ostream& Stock::operator<<(std::ostream& os, const Stock& dt)
{
    os << dt.getTickerSymbol << ": " << dt.getSharesOwned << " " << dt.getPurchasePrice;
    return os;
}

#endif