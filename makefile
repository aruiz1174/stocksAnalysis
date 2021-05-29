all:	stocks

stocks:	Main.o SymbolPair.o SymbolTable.o
	g++ Main.o SymbolPair.o SymbolTable.o -o stocks.exe

Main.o:	Main.cpp
	g++ -c Main.cpp

SymbolPair.o:	SymbolPair.cpp SymbolPair.h
	g++ -c SymbolPair.cpp

SymbolTable.o:	SymbolTable.cpp SymbolTable.h
	g++ -c SymbolTable.cpp

clean:
	rm -f *.o Stocks.exe
