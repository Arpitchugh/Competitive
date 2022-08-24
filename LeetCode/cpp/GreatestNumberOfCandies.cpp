/*
Q1431. Kids With the Greatest Number of Candies
There are n kids with candies. You are given an integer array candies, where each candies[i] represents the number of candies the ith kid has, and an integer extraCandies, denoting the number of extra candies that you have.
Return a boolean array result of length n, where result[i] is true if, after giving the ith kid all the extraCandies, they will have the greatest number of candies among all the kids, or false otherwise.
Note that multiple kids can have the greatest number of candies.

Example 1:

Input: candies = [4,2,1,1,2], extraCandies = 1
Output: [true,false,false,false,false] 
Explanation: There is only 1 extra candy.
Kid 1 will always have the greatest number of candies, even if a different kid is given the extra candy.
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>v;
        int maxm=*max_element(candies.begin(), candies.end());
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=maxm)
                v.push_back(true);
            else
                v.push_back(false);
        }
        return v;
    }
};

int main(){
    Solution s;
    vector<int> candies = {2,3,5,1,3};
    int extraCandies = 3;
    vector<bool> result = s.kidsWithCandies(candies,extraCandies);
    for(auto i:result) cout<<result[i]<<" ";
    return 0;
}