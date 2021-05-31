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

