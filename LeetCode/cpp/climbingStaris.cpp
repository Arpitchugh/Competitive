/*

You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?



Example 1:

Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps

*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        int one = 1, two = 1;
        int temp = 0;

        for(int i=0; i<n-1; i++){
            temp = one;
            one = one + two;
            two = temp;

        }
        return one;
    }
};

int main() {
  Solution ans;
  int n = 2;
  cout << ans.climbStairs(n);
  return 0;
}
