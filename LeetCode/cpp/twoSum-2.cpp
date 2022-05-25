#include<iostream>
#include<map>
#include<vector>
using namespace std;

// return index+1 as output

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
    v = { 1,2,3,4,5,6 };
    vector<int> result = s.twoSum(v, 11);
    for (auto i: result) {
        std::cout << i << " ";
    }
    return 0;

}
