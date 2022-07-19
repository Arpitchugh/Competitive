class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left =0;
        int right = nums.size()-1;
        while(left<=right){
          int mid = left+ (right-left)/2;
          if(nums[mid]==target){
            return mid;
          }
          else if(nums[mid]>target){
            right =mid-1;
          }
          else{
            left = mid +1;
          }
        }
		// above steps find it target exists in out array if it does then return its position.
		// If it does not then position where our search window become of single length then we can insert target at next position. Once Proceed through any example and you will see the pattern.
        return left;
    }
};