/*
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).


Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
*/

#include <iostream>
#include <vector>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
	double l = 0;
	double r;
	// assigning r
	if (nums1.size() < nums2.size()) { r = nums1.size() - 1; }
	else {
		r = nums2.size() - 1;
	}

	double total = nums1.size() + nums2.size();
	double half = total / 2;

	double mid1 = (l + r) / 2;
	double mid2 = half - mid1 - 2;


	double aLeft = nums1[mid1];
	double aRight = nums1[mid1 + 1];
	double bLeft = nums2[mid2];
	double bRight = nums2[mid2 + 1];

	if (aLeft <= bRight && bLeft <= aRight) {
		if (total / 2 == 0) {
			return min(aRight, bRight);
		}
		else {
			return (max(aLeft, bLeft) + min(aRight, bRight)) / 2;
		}
	}
	else if (aLeft > bRight) {
		r = mid1 - 1;
	}
	else {
		l = mid1 + 1;
	}
	return 0;

}


int main(int argc, char const* argv[]) {
	vector<int> s = { 1,3,5 };
	vector<int> t = { 2,3 };
	cout << findMedianSortedArrays(s, t);
	return 0;
}
