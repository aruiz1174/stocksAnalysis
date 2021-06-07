#ifndef STOCK_H
#define STOCK_H

#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class Stock
{
    private:
    string tickerSym;
    int sharesOwned;
    double purchasePrice;


    public:
    Stock();
    Stock(const Stock& other);
    Stock& operator=(const Stock& other);
    Stock(int shares, double purchaseP, string ticker);
    string getTickerSymbol();
    int getSharesOwned();
    double getPurchasePrice();
    void setSharesOwned(int shares);
    string toString();

};

#endif
