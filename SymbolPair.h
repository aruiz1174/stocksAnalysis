#ifndef SYMBOL_PAIR_H
#define SYMBOL_PAIR_H
#include <string>

class SymbolPair {
 private:
    std::string tickerSym;
    std::string companyName;
 public:
    SymbolPair();
    std::string getTickerSymbol();
    std::string getCompanyName();
};

#endif