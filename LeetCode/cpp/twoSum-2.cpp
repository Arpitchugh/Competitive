#include<iostream>
#include<map>
#include<vector>
using namespace std;
// map Solution

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;
        vector<int> ans;
        for (int i = 0; i < numbers.size()-1; i++) {
            if (numbers[left] + numbers[right] == target) {
                ans.push_back(left+1);
                ans.push_back(right+1);
                // loop runs twice for some reason
                break;
            }
            else if (numbers[left] + numbers[right] > target) right--;
            else { left++; }
        }
        return ans;
    }
};


int main() {
    Solution s;
    vector<int> v;
    v = { 2,3,4 };
    vector<int> result = s.twoSum(v, 6);
    for (auto i: result) {
        std::cout << i << " ";
    }
    return 0;

}
