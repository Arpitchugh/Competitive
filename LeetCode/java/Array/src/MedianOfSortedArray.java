public class MedianOfSortedArray {

    public static void main(String[] args) {
        int nums1[] = { 1, 2, 3 };
        int nums2[] = { 3, 4 };
        double ans = findMedianSortedArrays(nums1, nums2);
        System.out.println(ans);
    }

    private static double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int ans = 0;
        // Calculate center of both
        int l1 = nums1.length;
        int l2 = nums2.length;
        int ml1 = l1 / 2;
        int ml2 = l2 / 2;

        // If both even
        if (l1 % 2 == 0 && l2 % 2 == 0) {
            ans = (nums1[ml1] + nums1[ml1 + 1] + nums2[ml2] + nums2[ml2 + 1]) / 4;
            return ans;
        } else if (l1 % 2 == 0 && l2 % 2 != 0) {
            ans = (nums1[ml1] + nums1[ml1 + 1] + nums2[ml2]) / 3;
            return ans;
        } else if (l1 % 2 != 0 && l2 % 2 == 0) {
            ans = nums1[ml1] + (nums2[ml2] + nums2[ml2 + 1]) / 3;
            return ans;
        } else {
            ans = (nums1[ml1] + nums2[ml2]) / 2;
            return ans;
        }
    }

    {

    }

}
