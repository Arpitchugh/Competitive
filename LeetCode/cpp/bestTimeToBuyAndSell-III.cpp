/*
You are given an array prices where prices[i] is the price of a given stock on the ith day.
Find the maximum profit you can achieve. You may complete at most two transactions.
Note: You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).

Example 1:
Input: prices = [3,3,5,0,0,3,1,4]
Output: 6
Explanation: Buy on day 4 (price = 0) and sell on day 6 (price = 3), profit = 3-0 = 3.
Then buy on day 7 (price = 1) and sell on day 8 (price = 4), profit = 4-1 = 3.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int max(int p, int p1, int p2)
    {
        // one is greater
        if (p >= p1 && p < p2)
            return p + p2;
        else if (p < p1 && p >= p2)
            return p + p1;
        else
            return p1 + p2;
    }
    int maxProfit(vector<int> &prices)
    {
        int left = 0;
        int right = 0;
        int maxProfit = 0;
        int profit1 = 0, profit2 = 0;
        while (right < prices.size())
        {
            int profit = prices[right] - prices[left];
            if (profit <= 0)
            {
                left = right;
                right++;
            }
            else
            {
                if (profit1 < profit2)
                {
                    profit1 = profit;
                }
                else
                    profit2 = profit;
                maxProfit = max(profit, profit1, profit2);
                right++;
                left++;
            }
        }
        return maxProfit;
    }
};

int main()
{
    Solution s;
    vector<int> prices = {3, 3, 5, 0, 0, 3, 1, 4};
    cout << s.maxProfit(prices) << endl;
    return 0;
}