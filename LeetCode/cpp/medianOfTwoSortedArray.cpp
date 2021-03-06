/*
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).


Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
*/

#include <bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
	/* This does not work for nums1 = 1,2 and nums2 = 3,4
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
  */
	int n = nums1.size();
	int m = nums2.size();
	int cnt = ((n + m) / 2);
	int sm = (n + m);

	int st = 0, end = n;
	while (st <= end)
	{
		int mid = st + ((end - st) / 2);
		int rem = cnt - mid;

		if (rem > m)
		{
			st = mid + 1;
			continue;
		}
		if (mid > cnt)
		{
			end = mid - 1;
			continue;
		}

		int l1 = INT_MIN, l2 = INT_MIN, r1 = INT_MAX, r2 = INT_MAX;
		if (mid > 0)
			l1 = nums1[mid - 1];
		if (rem > 0)
			l2 = nums2[rem - 1];
		if (mid < n)
			r1 = nums1[mid];
		if (rem < m)
			r2 = nums2[rem];

		if (l1 <= r2 && l2 <= r1)
		{
			double x = max(l1, l2);
			double y = min(r1, r2);
			if (sm % 2 == 0)
				return ((x + y) / 2.0);
			else
				return y;
		}
		else if (l1 > r2)
			end = mid - 1;
		else if (l2 > r1)
			st = mid + 1;
	}
	return 0;


}


int main(int argc, char const* argv[]) {
	vector<int> s = { 1,2 };
	vector<int> t = { 3,4 };
	cout << findMedianSortedArrays(s, t);
	return 0;
}
