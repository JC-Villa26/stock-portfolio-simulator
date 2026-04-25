# Stock Portfolio Simulator

A C++ program that simulates a stock portfolio using object-oriented programming principles.

## Concepts Demonstrated
- Class design and implementation
- Public inheritance (DividendStock extends Stock)
- Method overriding and runtime polymorphism
- Market value, cost basis, and profit calculations

## Project Structure
- Stock.h / Stock.cpp — Base stock class
- DividendStock.h / DividendStock.cpp — Derived class with dividend support
- Cash.h / Cash.cpp — Cash asset class
- main.cpp — Portfolio simulation driver
- Makefile — Build configuration

## How to Compile and Run
make driver
'''
./driver

## Sample Output
Stock (NVDA):
  value: $  2080.00
   cost: $  1920.00
 profit: $   160.00
 '''
