#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> s;
        s.push(-1);
        int ans = 0;
        int n = heights.size();
        for(int i = 0; i < n; i++){
            while((s.top()!= -1) && heights[s.top()] >= heights[i]){
                int last_idx = s.top(); s.pop();
                ans = max(ans, heights[last_idx] * (i - s.top() - 1));
            }
            s.push(i);
        }
        // reach the end of list
        while(s.top()!= -1){
            int last_idx = s.top(); s.pop();
            ans = max(ans, (heights[last_idx]) * (n - 1 - s.top()));
        }

        return ans;
    }
};
int main(){
  Solution sol;

}
