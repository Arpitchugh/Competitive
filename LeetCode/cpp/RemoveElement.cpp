#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int sz = nums.size(), i = 0, j = 0;
        while (j < sz) {
            if (nums[j] != val) {
                nums[i] = nums[j];
                ++i;
            }
            ++j;
        }
        return i;
    }
};

int main() {
    Solution solution;
    vector<int> nums;
    int val, result;

    nums = {3, 2, 2, 3,5,6};
    val = 2;
    result = solution.removeElement(nums, val);
    for (int i = 0; i < result; ++i) {
        cout << nums[i] << ',';
    } 
    cout << endl;

    return 0;
}
