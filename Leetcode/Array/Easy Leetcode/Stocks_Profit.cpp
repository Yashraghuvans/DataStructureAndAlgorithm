#include <iostream>

#include <bits/stdc++.h>

using namespace std;



class Solution
{

public:

  int maxProfit (vector < int >&prices)
  {

	int profit = 0;

	int buy = prices[0];



	for (int i = 0; i < prices.size (); i++)


	  {

		if (buy > prices[i])


		  {

			buy = prices[i];

		  }

		profit = max (profit, prices[i] - buy);

	  }

	return profit;

  }

};

int
main ()
{
  Solution s;
  vector < int >prices;
  int size;

  cout << "Enter the number of stock prices: ";
  cin >> size;



  cout << "Enter the stock prices: ";
  for (int i = 0; i < size; i++)
	{
	  int price;
	  cin >> price;
	  prices.push_back (price);
	}

  int max_profit = s.maxProfit (prices);

  cout << "Maximum profit: " << max_profit << endl;

  return 0;
}
