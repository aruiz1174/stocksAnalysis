#ifndef STOCK_H
#define STOCK_H

#include <string>
#include <iostream>
#include <fstream>

class Stock {
private:
    std::string tickerSym;
    int sharesOwned;
    double purchasePrice;
public:
    Stock();
    Stock(const Stock& other);
    Stock& operator=(const Stock& other);
    Stock(int shares, double purchaseP, std::string ticker);

    std::string getTickerSymbol();
    int getSharesOwned();
    double getPurchasePrice();

    void setSharesOwned(int shares);

    friend std::ostream& operator<<(std::ostream& os, const Stock& dt);
};

#endif
