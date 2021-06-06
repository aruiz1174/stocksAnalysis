#include "Portfolio.h"
#include "SymbolTable.h"
#include <string>
#include <iostream>
using namespace std;

Portfolio::Portfolio()
{
    numStocks = 0;
    gainLoss = 0.0;
  
}

Portfolio::Portfolio(SymbolTable symbol)
{
   // cout << "hello" << endl;
    symbols = symbol;
}

void Portfolio::processTransaction(char a, int num, double gainLoss, string sym)
{

}

void Portfolio::buy(char a)
{
    
}

void Portfolio::sell(char a)
{

}

int Portfolio::findStock(string sym)
{
    return 0;
}

string Portfolio::toString()
{
    return "";
}