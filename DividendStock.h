/**
 * @file DividendStock.h
 * @brief Header file for the DividendStock class
 * 
 * This file contains the declaration of the DividendStock class, which
 * inherits fromthe Stock and adds dividend payment tracking
 */

#ifndef DIVIDENDSTOCK_H
#define DIVIDENDSTOCK_H

#include "Stock.h"

class DividendStock : public Stock {
private: 
    double dividends_; //Total dividends recieved 

public: 
    //Creates a dividend stock 
    DividendStock(std::string symbol, double sharePrice = 0.0);

    //Records a dividend payment
    void PayDividend(double amountPerShare);

    //Get total dividends received 
    double GetDividends() const;

    //Get current market value (inlcudes dividends)
    //Overrides Stock::GetmarketValue()
    double GetMarketValue() const;

    //Print dividend stock details
    //Overides Stock::Print()
    void Print() const;

};

#endif