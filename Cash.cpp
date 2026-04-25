/**
 * @file Cash.cpp
 * @brief Implementation of the Cash class
 */

#include "Cash.h"
#include <iostream>
#include <iomanip>

//Store the amount of cash
Cash::Cash(double amount){
    amount_ = amount; 
}

 /**
  * Update cas amount
  * Simulates deposits (increase) or withdrawls (decrease)
  */
void Cash::SetAmount(double amount){
    amount_ = amount;
}

//Return the current amount of cash
double Cash::GetAmount() const {
    return amount_;
}

//Returns the amount (cash is always worth its face value)
double Cash::GetMarketValue() const {
    return amount_;
}

//Returns amount (cost = value)
double Cash::GetCost() const {
    return amount_;
}

double Cash::GetProfit() const {
    return 0.0; // Cash never profits or loses
}

void Cash::Print() const {
    std::cout << "Cash: " << std::endl;
    std::cout << std::setw(10) << std::right << " value: $" << std::setw(9) 
        << std::fixed << std::setprecision(2) << GetMarketValue() << std::endl; 
    std::cout << std::setw(10) << std::right << "  cost: $" << std::setw(9) 
        << std::fixed << std::setprecision(2) << GetCost() << std::endl; 
    std::cout << std::setw(7) << std::right << " profit: $" << std::setw(9) 
        << std::fixed << std::setprecision(2) << GetProfit() << std::endl; 
    
}
