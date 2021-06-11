cmake_minimum_required(VERSION 3.17)
project(stocksAnalysis)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(stocksAnalysis
        SymbolPair.cpp
        SymbolPair.h
        SymbolTable.cpp
        SymbolTable.h
        Portfolio.h
        Portfolio.cpp
        Stock.h
        Stock.cpp
        main.cpp)
