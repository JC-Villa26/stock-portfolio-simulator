#include <iostream>
#include <iomanip>
#include <vector>

#include "Stock.h"
#include "DividendStock.h"
#include "Cash.h"

using namespace std;

int main() {
  vector<Stock> plain_stocks;
  vector<DividendStock> div_stocks;
  vector<Cash> cashes;

  Stock s1("NVDA", 500.0);
  s1.Purchase(4, 480.0);
  s1.SetSharePrice(520.0);
  plain_stocks.push_back(s1);

  Stock s2("AMD", 100.0);
  s2.Purchase(20, 95.0);
  s2.SetSharePrice(105.0);
  plain_stocks.push_back(s2);

  DividendStock d1("VZ", 60.0);
  d1.Purchase(25, 58.0);
  d1.PayDividend(1.0);
  d1.SetSharePrice(62.0);
  div_stocks.push_back(d1);

  Cash c1(3000.0);
  cashes.push_back(c1);

  Cash c2(1000.0);
  cashes.push_back(c2);

  double total_value = 0.0;

  cout << "Plain Stocks:" << endl;
  for (size_t i = 0; i < plain_stocks.size(); ++i) {
    plain_stocks[i].Print();
    cout << endl;
    total_value += plain_stocks[i].GetMarketValue();
  }

  cout << "Dividend Stocks:" << endl;
  for (size_t i = 0; i < div_stocks.size(); ++i) {
    div_stocks[i].Print();
    cout << endl;
    total_value += div_stocks[i].GetMarketValue();
  }

  cout << "Cash Holdings:" << endl;
  for (size_t i = 0; i < cashes.size(); ++i) {
    cashes[i].Print();
    cout << endl;
    total_value += cashes[i].GetMarketValue();
  }

  cout << "Total Portfolio Market Value: $" << total_value << endl;
  return 0;
}