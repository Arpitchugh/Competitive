#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left = 0, count = 0;

        for(int right = 1; right < nums.size(); right++)
        {
            if(nums[left] != nums[right])
            {
                // left will hold our last non repeated number
                    // left + 1 will store the next non repeated number
                    nums[left+1] = nums[right];
                    left++;
                    // don't want to increment count when we encounter a unique number, hence why we use continue here
                    continue;
            }
            count++;
        }
        // return the new array along with the right size
        return nums.size() - count;
    }

    /* Error, Tried using map
    map<int,int> m;
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i]) != m.end()){
                count++;
                m.insert({i,nums[i]});
            }
        }
        return m;
    */
};

int main(){
  int size = 0;
  std::cout << "Input size of array: " << '\n';
  std::cin >> size;
  std::vector<int> v;
  std::cout << "Input elements: " << '\n';
  for(int i =0;i<size;i++){
    cin >> v[i];
  }
  Solution ans;
  int output = ans.removeDuplicates(v);
  cout << output;
}
