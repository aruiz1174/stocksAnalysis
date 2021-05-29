#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

#include <string>
#include <iostream>
#include <fstream>

#include "SymbolPair.h"

class SymbolTable {
 private:
    int numSymbols;
    SymbolPair symbolPairs[10];
 public:
    SymbolTable(std::ifstream &fileIn);
    std::string findCompany(std::string aCompany);
    std::string print();
};

#endif
