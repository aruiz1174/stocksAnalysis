#include "SymbolPair.h"

SymbolPair::SymbolPair(std::string ticker, std::string company) {
    tickerSym = ticker;
    companyName = company;
}
std::string SymbolPair::getCompanyName() {
    return companyName;
}
std::string SymbolPair::getTickerSymbol() {
    return tickerSym;
}

SymbolPair& SymbolPair::operator=(const SymbolPair& other) {
    tickerSym = other.tickerSym;
    companyName = other.companyName;
    return *this;
}

SymbolPair::SymbolPair(const SymbolPair& other) {
    tickerSym = other.tickerSym;
    companyName = other.companyName;
}

