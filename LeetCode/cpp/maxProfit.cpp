// Best Time to Buy and sell Stocks

/*
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
*/

#include<bits/stdc++>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {

    }
};

int main(){
  int length;
  cout << "Input the size => " << endl;
  cin >> length;
  int array_elem;
  vector<int> prices;

  for(int i=0;i<length;i++){
    cin >> array_elem;
    prices.push_back(array_elem)
  }
  Solution ans;
  cout << ans.maxProfit(prices);
}
