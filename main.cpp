#include "LinkedQueue.h"
#include "SymbolTable.h"
#include "Portfolio.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    ifstream myFile("symboldata.txt");
    SymbolTable aTable(myFile);
    myFile.close();
    ifstream secondFile("stockdata.txt");
    std::string line;
    Portfolio b(aTable);
    if (secondFile.is_open()) {
        while (getline(secondFile, line)) {
            string buySell = line.substr(0, line.find(" "));
            string sym = line.substr(line.find_last_of(" ") + 1);
            line = line.substr(2);
            int numShares = stoi(line.substr(0, line.find(" ")));
            double price = stod(line.substr(line.find(" ") + 1, line.find_last_of(" ")));
            b.processTransaction(buySell, numShares, price, sym);
        }
    }
    b.toString();
    secondFile.close();
}