#include "SymbolPair.h"

SymbolPair() {
    tickerSym = "";
    companyName = "";
}
string SymbolPair::getCompanyName() {
    return companyName;
}
string SymbolPair::getTickerSymbol() {
    return tickerSym;
}

