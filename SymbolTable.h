class SymbolTable {
 private:
    int numSymbols;
    SymbolPair symbolPairs[];
 public:
    SymbolTable(ifstream &fileIn);
    string findCompany(string aCompany);
    string print();
};
