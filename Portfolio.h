#ifndef PORTFOLIO_H
#define PORTFOLIO_H
#include "SymbolTable.h"
#include "LinkedQueue.h"
#include "Stock.h"


#include <string>
#include <iostream>
#include <fstream>

class Portfolio
{
private:
    int numStocks;
    SymbolTable symbols;
    double gainLoss;
    vector<LinkedQueue<Stock> > stocks;
public:
    Portfolio();
    Portfolio(SymbolTable symbol);

    void processTransaction(std::string a, int numShares, double price, std::string sym);
    void buy(int numShares, double price, std::string sym);
    void sell(int numShares, double price, std::string sym);

    int findStock(std::string sym);
    std::string toString();

};

#endif
