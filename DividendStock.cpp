/**
 * @file DividendStock.cpp
 * @brief Implementation of the DividendStock class
 */

#include "DividendStock.h"
#include <iostream>
#include <iomanip>

// Calls base class constuctor (Stock) and initializes dividends to 0.0. 
DividendStock::DividendStock(std::string symbol, double sharePrice) : Stock(symbol, sharePrice) {
    dividends_ = 0.0;
}

/**
 * Recieve an amountPerShare for each share you own
 * Total dividend = amountPerShare * number of shares you own
 */
void DividendStock::PayDividend(double amountPerShare){
    dividends_ += amountPerShare * GetShares(); 
}

// Get total dividends
double DividendStock::GetDividends() const {
    return dividends_; 
}

/**
 * Overrides Stock::GetMarketValue() 
 * Call Stock::GetMarketValue to get base stock value
 * Then add dividends on top of that value
 */
double DividendStock::GetMarketValue() const { 
    return Stock::GetMarketValue() + dividends_; 
}

void DividendStock::Print() const{
    std::cout << "DividendStock (" << GetSymbol() << "):" << std::endl;
    std::cout << std::setw(10) << std::right << " value: $" << std::setw(9) 
        << std::fixed << std::setprecision(2) << GetMarketValue() << std::endl; 
    std::cout << std::setw(10) << std::right << "  cost: $" << std::setw(9) 
        << std::fixed << std::setprecision(2) << GetCost() << std::endl; 
    std::cout << std::setw(7) << std::right << " profit: $" << std::setw(9) 
        << std::fixed << std::setprecision(2) << GetProfit() << std::endl; 
    
}

