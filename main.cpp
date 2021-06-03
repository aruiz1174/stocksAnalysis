#include "LinkedQueue.h"
#include "SymbolTable.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    ifstream myFile("symboldata.txt");
    SymbolTable aTable(myFile);
    aTable.print();
    myFile.close();
}