/*
You are given a string s and an integer k. You can choose any character of the string and change it to any other uppercase English character.
You can perform this operation at most k times.
Return the length of the longest substring containing the same letter you can get after performing the above operations.

Input: s = "ABAB", k = 2
Output: 4
Explanation: Replace the two 'A's with two 'B's or vice versa.

*/

#include<iostream>
#include<string>
#include <unordered_map>

using namespace std;


class Solution {
public:
    int max(int a, int b) {
        return a > b ? a : b;
    }

    int substring(string s,int k) {
        unordered_map<char, int> freq;
        int start = 0;
        int end = 0;
        int maxLen = 0;
        int maxFreq = 0;
        while (end < s.size()) {
            maxFreq = max(maxFreq, ++freq[s[end++]]);

            if (end - start - maxFreq <= k) {
                maxLen = max(maxLen, end - start);
            }
            else {
                freq[s[start]]--;
                ++start;
            }
        }
        return maxLen;
    }
};


int main() {
    Solution s;
    string v;
    int k = 2;
    v = "ABAB";
    cout << s.substring(v,k);

    return 0;

}
