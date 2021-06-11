#include "Portfolio.h"
#include "SymbolTable.h"
#include <string>
#include <iostream>

Portfolio::Portfolio() {
    numStocks = 0;
    gainLoss = 0.0;

}

Portfolio::Portfolio(SymbolTable symbol) {
    numStocks = 0;
    symbols = symbol;
    gainLoss = 0.0;
}

void Portfolio::processTransaction(std::string a, int num, double price, std::string sym) {
    if (a == "b")
        buy(num, price, sym);
    else if (a == "s")
        sell(num, price, sym);
    else
        cout << "invalid transaction" << endl;
}

void Portfolio::buy(int numShares, double price, std::string sym) {
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

void Portfolio::sell(int numShares, double price, std::string sym) {
    std::string a = sym.substr(0,sym.find_first_of("\r"));
    Stock aStock(numShares, price, sym);
    LinkedQueue<Stock> aQueue;
    int temp = numShares;
    int index = findStock(sym);
    double originalPrice = 0.0;

    if(index != -1) {
        while(temp > 0) {
            if (stocks[index].size() != 0) {
                originalPrice = stocks[index].getFront()->data.getPurchasePrice();
                if (temp > stocks[index].getFront()->data.getSharesOwned()) {
                    // originalPrice = stocks[index].getFront()->data.getPurchasePrice();
                    gainLoss = gainLoss + ((stocks[index].getFront()->data.getSharesOwned()) * (price - originalPrice));
                    temp = temp - stocks[index].getFront()->data.getSharesOwned();
                    stocks[index].dequeue();

                } else {

                    // originalPrice = stocks[index].getFront()->data.getPurchasePrice();
                    gainLoss = gainLoss + ((temp) * (price - originalPrice));
                    stocks[index].getFront()->data.setSharesOwned(
                            stocks[index].getFront()->data.getSharesOwned() - temp);
                    temp = 0;
                    //stocks[index].getFront()->data.setSharesOwned(stocks[index].getFront()->data.getSharesOwned() - temp);

                }
            } else {
                cout << a << ":" << temp << " shares were not sold at $" << price
                     << " due to insufficient shares owned" << endl;
                temp = 0;
            }
        }
    }
}

int Portfolio::findStock(string sym) {
    for (int i = 0; i < numStocks; i++) {
        if (stocks[i].size() != 0)
            if (stocks[i].getFront()->get_data().getTickerSymbol() == sym)
                return i;
    }
    return -1;
}

void Portfolio::toString() 
{
    std::cout << "Portfolio: " << std::endl;
    for (int i = 0; i < numStocks; i++)
    {
        if (!stocks[i].isEmpty()) {
            std::cout << std::endl;
            string str = stocks[i].getFront()->get_data().getTickerSymbol();
            str.erase(str.size() - 1);
            str += ":";
            std::cout << str << std::endl;
            stocks[i].display();
        }
    }
}