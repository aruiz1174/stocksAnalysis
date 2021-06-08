#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

#include <string>
#include <iostream>
#include <fstream>
#include <vector>

#include "SymbolPair.h"

class SymbolTable {
private:
    int numSymbols;
    std::vector<SymbolPair> symbolPairs;
public:
    SymbolTable();
    SymbolTable(std::ifstream &fileIn);
    SymbolTable& operator=(const SymbolTable& other);
    SymbolTable(const SymbolTable& other);

    std::string findCompany(std::string aCompany);

    void print();
};

#endif
