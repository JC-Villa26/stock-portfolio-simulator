/**
 * @file Stock.h 
 * @brief Header file for the stock class
 * 
 * This file contains the declaration of the Stock class, which represents
 * a basic stock investment with ticker symbol, shares, cost, and current price. 
 * Stock serves as the base class for DividendStock
 */

#ifndef STOCK_H
#define STOCK_H

#include <string> // for std::string

class Stock {
private:
    std::string symbol_;
    int shares_;
    double cost_;
    double sharePrice_;

public:
    //Creates stock with symbol and optinial initial price
    Stock(std::string symbol, double sharePrice = 0.0);
    
    //Purchase shares at a given price
    void Purchase(int shares, double sharePrice);
    
    //Get stock's tiicker symbol 
    std::string GetSymbol() const;

    //Get total number of shares owned 
    int GetShares() const; 
    
    //Get current share price
    double GetSharePrice() const; 

    //Set current share price
    void SetSharePrice(double sharePrice);

    //Get total cost paid for all shares 
    double GetCost() const; 

    //Get current market value (shares * current price)
    double GetMarketValue() const;

    //Get profit (market value - cost)
    double GetProfit() const;

    //Print stock details in formatted output
    void Print() const; 
};
 
#endif