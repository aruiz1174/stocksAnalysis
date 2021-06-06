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
    symbols = symbol;
    numStocks = 0;
    gainLoss = 0;
}

void Portfolio::processTransaction(char a, int num, double price, string sym)
{
    if (a == "buy")
        buy();
    else if (a == "sell")
        sell();
    else
        cout << "invalid transaction" << endl;
}

void Portfolio::buy(int numShares, double price, string sym)
{
    Stock aStock(numShares, price, sym);
    LinkedQueue<Stock> aQueue;
    int index = findStock(sym);
    if (index != -1) { //is it in our portfolio already?
        stocks[index].enqueue(aStock);
    } else {
        aQueue.enqueue(aStock);
        stocks.push_back(aQueue);
        numStocks++;
    }

}

void Portfolio::sell(char a)
{

}

int Portfolio::findStock(string sym)
{
    for (int i = 0; i < numStocks; i++) {
        if (stocks[i].getFront()->get_data().getTickerSymbol() == sym) {
            return i;
        }
    }
    return -1;
}

string Portfolio::toString()
{
    return "";
}