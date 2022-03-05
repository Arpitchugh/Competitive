/*
You are given an integer array nums. You want to maximize the number of points you get by performing the following operation
any number of times:

Pick any nums[i] and delete it to earn nums[i] points. Afterwards, you must delete every element equal to nums[i] - 1 and
every element equal to nums[i] + 1.
Return the maximum number of points you can earn by applying the above operation some number of times.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int N = 1000;
    int deleteAndEarn(vector<int>& nums) {
       vector<int> frequencyMap(N, 0);
       int dp[N];

       for(auto num : nums)
           frequencyMap[num]++;

       dp[0] = 0;
       dp[1] = frequencyMap[1];

       for(int i=2;i<N;i++)
           dp[i] = max(dp[i-2]+i*frequencyMap[i], dp[i-1]);

     return dp[N-1];
   }
};


int main(){
  vector<int> nums = {2,2,3,4,4,5,5};
  Solution obj;
  cout << obj.deleteAndEarn(nums);
}
