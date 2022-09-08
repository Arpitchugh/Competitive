/*
You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

Example 1:
Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int max(int mp,int p){
        if(mp > p) return mp;
        else return p;
    }
    int maxProfit(vector<int>& prices) {
        int left = 0;
        int right = 1;
        int maxProfit = 0;
        while(right < prices.size()){
            int profit = prices[right] - prices[left];
            if(profit < 0) {
                left = right;
                right++;
            }
            else{
                maxProfit = max(maxProfit,profit);
                right++;
            }
        }
        return maxProfit;
    }
};

int main(){
    Solution s;
    vector<int> prices = {7,1,5,3,6,4};
    cout<<s.maxProfit(prices)<<endl;
    return 0;
}