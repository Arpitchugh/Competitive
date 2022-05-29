/*
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

*/

/*
  find the min and then find profit and store it as answer and after a complete iteration return ans;
*/

#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
	int max(int a, int b) {
		return a > b ? a : b;
	}
	int maxProfit(vector<int>& prices) {
		int answer = 0;
		int min_price = prices[0];
		for (int i = 1; i < prices.size(); i++)
		{
			if (prices[i] < min_price)
			{
				min_price = prices[i];
			}

			int profit = prices[i] - min_price;

			if (answer < profit)
			{
				answer = profit;
			}
		}

		return answer;
	}
};


int main() {
	Solution s;
	vector<int> v;
	v = { 7,1,5,3,6,4 };
	cout << s.maxProfit(v);

	return 0;

}
