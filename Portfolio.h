#ifndef PORTFOLIO_H
#define PORTFOLIO_H
#include "SymbolTable.h"
#include "LinkedQueue.h"
#include "Stock.h"

#include <string>
#include <iostream>
#include <fstream>
using namespace std;

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
    void processTransaction(char a, int numShares, double price, string sym);
    void buy(char a);
    void sell(char a);
    int findStock(string sym);
    string toString();
};

#endif
