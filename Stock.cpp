/**
 * @file Stock.cpp
 * @brief Implementation of the Stock class
 */

 #include "Stock.h"
 #include <iostream>
 #include <iomanip>

 Stock::Stock(std::string symbol, double sharePrice){
    symbol_ = symbol; 
    sharePrice_ = sharePrice;
    shares_ = 0; //Start with no shares
    cost_ = 0.0; //Start with no cost
 }

 void Stock::Purchase(int shares, double sharePrice){
    shares_ += shares; //Add to total shares owned 
    cost_ += shares * sharePrice; //Add cost of this purchase
 }

 std::string Stock::GetSymbol() const {
    return symbol_; 
 }

 int Stock::GetShares() const {
    return shares_;
 }

 double Stock::GetSharePrice() const {
    return sharePrice_;
 }

 void Stock::SetSharePrice(double sharePrice){
    sharePrice_ = sharePrice; 
 }

 double Stock::GetCost() const {
    return cost_;
 }

 double Stock::GetMarketValue() const {
    return shares_ * sharePrice_; 
 }

 double Stock::GetProfit() const {
    return GetMarketValue() - GetCost();
 }

 void Stock::Print() const {
    std::cout << "Stock (" << symbol_ << "):" << std::endl;
    std::cout << std::setw(10) << std::right << " value: $" << std::setw(9) 
        << std::fixed << std::setprecision(2) << GetMarketValue() << std::endl; 
    std::cout << std::setw(10) << std::right << "  cost: $" << std::setw(9) 
        << std::fixed << std::setprecision(2) << GetCost() << std::endl; 
    std::cout << std::setw(7) << std::right << " profit: $" << std::setw(9) 
        << std::fixed << std::setprecision(2) << GetProfit() << std::endl; 
    
    
 }

