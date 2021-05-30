#include "Stock.h"
#include <string>
#include <iostream>
using namespace std;

Stock::Stock(int shares, double purchase, string ticker)
{
    shares = sharesOwned;
    purchase = purchasePrice;
    ticker = tickerSym;

}

string Stock::getTickersymbol()
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
