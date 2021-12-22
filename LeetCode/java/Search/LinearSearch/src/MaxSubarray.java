import javax.swing.text.StyledEditorKit.ForegroundAction;

//Q. Given an integer array nums, find the contiguous subarray (containing at least one number) which has the 
// largest sum and return its sum.
// A subarray is a contiguous part of an array.

// ** run loop add each element to sum and compare with max save which ever is bigger in max return max

public class MaxSubarray {
    public static void main(String[] args) {
        int[] nums = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
        int ans = maxSubArray(nums);
        System.out.println(ans);
    }
    public static int maxSubArray(int[] nums) {
        int max = Integer.MIN_VALUE, sum = 0;
        int n = nums.length;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            max = Math.max(sum, max);

            if (sum < 0)
                sum = 0;
        }
        return max;
    }
}
