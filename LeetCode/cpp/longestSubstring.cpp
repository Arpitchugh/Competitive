// https://leetcode.com/problems/longest-substring-without-repeating-characters/
/*
Given a string s, find the length of the longest substring without repeating characters.
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
*/

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  string s;
  std::cout << "Input string: " << '\n';
  getline(cin,s);
  //logic
  unordered_map<char , int > ump;
        int i=0,j=0,ans = 0;
        while(j < s.size()){
            ump[s[j]]++;      //Storing the count of each character of the string
            if(ump[s[j]] > 1){       //To remove all the duplicates from the substring formed
                while(ump[s[j]] > 1){
                    ump[s[i]]--;
                    if(ump[s[i]] == 0)
                        ump.erase(s[i]);
                    i++;
                }
            }
            else{    //If condition satisfies then calculate the maximum substring
                ans = max(ans,j-i+1);
            }
            j++;
        }
        std::cout << ans << '\n';
        return 0;    // Return max substring found.

}
