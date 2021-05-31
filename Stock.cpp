#include "Stock.h"
#include <string>
#include <iostream>
using namespace std;

Stock::Stock(int shares, double purchase, string ticker)
{
    sharesOwned = shares;
    purchasePrice = purchase;
    tickerSym = ticker;

}


string Stock::getTickerSymbol()

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
     shares = sharesOwned;
 }

string toString()
{
    return "";
}