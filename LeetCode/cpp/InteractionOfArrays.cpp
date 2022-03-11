/*
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>map;
        vector<int>result;
        for(int i=0;i<nums1.size();i++)
        {
            map[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++ )
        {
            if(map[nums2[i]]>0)
                result.push_back(nums2[i]);
                map[nums2[i]]--;
        }
        return result;
    }
};
