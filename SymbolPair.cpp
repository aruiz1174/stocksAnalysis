#include "SymbolPair.h"

SymbolPair::SymbolPair(std::string ticker, std::string company) {
    tickerSym = ticker;
    companyName = company;
}

//= overload constructor
SymbolPair& SymbolPair::operator=(const SymbolPair& other) {
    tickerSym = other.tickerSym;
    companyName = other.companyName;
    return *this;
}

//copy constructor
SymbolPair::SymbolPair(const SymbolPair& other) {
    tickerSym = other.tickerSym;
    companyName = other.companyName;
}

std::string SymbolPair::getCompanyName() {
    return companyName;
}
std::string SymbolPair::getTickerSymbol() {
    return tickerSym;
}


