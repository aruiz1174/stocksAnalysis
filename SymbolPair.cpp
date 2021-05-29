#include "SymbolPair.h"

SymbolPair::SymbolPair() {
    tickerSym = "";
    companyName = "";
}
std::string SymbolPair::getCompanyName() {
    return companyName;
}
std::string SymbolPair::getTickerSymbol() {
    return tickerSym;
}

