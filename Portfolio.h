#ifndef PORTFOLIO_H
#define PORTFOLIO_H
#include "SymbolTable.h"

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

    public:
    Portfolio();
    Portfolio(SymbolTable symbol);
    void processTransaction(char a, int num, double gainLoss, string sym);
    void buy(char a);
    void sell(char a);
    int findStock(string sym);
    string toString();
};

#endif
