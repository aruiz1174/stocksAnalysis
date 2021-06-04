#include "SymbolTable.h"

SymbolTable::SymbolTable()
{
    numSymbols = 0;
}

SymbolTable::SymbolTable(std::ifstream &fileIn)
{
    
    std::string line;
    if (fileIn.is_open()) {
        while (getline(fileIn, line)) {
            std::string ticker = line.substr(0, line.find(" "));
            std::string name = line.substr(line.find(" ") + 1);
            SymbolPair temp(ticker,name);
            symbolPairs.push_back(temp);
            numSymbols++;
        }
    } else
        std::cout << "File not opened!" << std::endl;
}

std::string SymbolTable::findCompany(std::string aCompany) {
    for (int i = 0; i < numSymbols; i++) {
        if (symbolPairs[i].getCompanyName() == aCompany)
            return aCompany;
    }
    return "";
}

void SymbolTable::print() {
    for (int i = 0; i < numSymbols; i++) {
        std::cout << symbolPairs[i].getCompanyName() << std::endl;
    }
}

SymbolTable& SymbolTable::operator=(const SymbolTable& other)
{
    std::cout << "ey" << std::endl;
    numSymbols = other.numSymbols;
    symbolPairs = other.symbolPairs;

}