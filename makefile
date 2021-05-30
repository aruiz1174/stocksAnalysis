all:	stocks

stocks:	Main.o SymbolPair.o SymbolTable.o Stock.o Portfolio.o
	g++ Main.o SymbolPair.o SymbolTable.o Stock.o Portfolio.o -o stocks

Main.o:	Main.cpp
	g++ -c Main.cpp

SymbolPair.o:	SymbolPair.cpp SymbolPair.h
	g++ -c SymbolPair.cpp

SymbolTable.o:	SymbolTable.cpp SymbolTable.h
	g++ -c SymbolTable.cpp

Stock.o: Stock.cpp Stock.h
	g++ -c Stock.cpp

Portfolio.o: Portfolio.cpp Portfolio.h
	g++ -c Portfolio.cpp

clean:
	rm -f *.o stocks
