/**
 * @file Cash.h 
 * @brief Header file for the Cash class
 * 
 * This file contains the declaration of the Cash class, which represents
 * liquid cash holdings in a portfolio 
 */

#ifndef CASH_H
#define CASH_H

class Cash {
private:
    double amount_; // Amount of cash

public:
    //Initializes cash with the given amount
    Cash(double amount = 0.0);

    //Set cash amount
    void SetAmount(double amount);

    //Get cash amount
    double GetAmount() const;

    /**
     * Get market value
     * Return market value
     */
    double GetMarketValue()const;

    /**
     * Get cost
     * Return cost
     */
    double GetCost() const;

    /**
     * Get profit (always 0 for cash)
     * Return 0.0
     */
    double GetProfit() const;

    //Print cas details
    void Print() const;
};

#endif