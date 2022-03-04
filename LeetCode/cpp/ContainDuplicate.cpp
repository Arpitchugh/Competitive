class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // Brute (time Limit Exceeded)
//        int n = nums.size();
//         for(int i = 0; i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 if(nums.at(i) == nums.at(j)){
//                       return true;
//                 }
//             }
//         }

        // Optimized
        unordered_set<int>s(nums.begin(), nums.end());
        return (s.size() != nums.size());
    }
};
