#include "bits/stdc++.h"
using namespace std;

int main(int argc, char const *argv[]) {
  string s = "anagarm";
  string t = "naagram";
  // logic
  if(s.size() != t.size()){
        cout << false;
  }

       unordered_map<char, int> sMap;
       bool ans = true;

       for(int i=0; i<s.size(); i++) {
           sMap[s[i]]++;
           // cout << sMap[s[i]]++ <<" ";
           sMap[t[i]]--;
           // cout << sMap[t[i]]++ <<" ";
           // cout << endl;
       }

       for(auto it=sMap.begin(); it!=sMap.end(); it++) {
           if(it->second != 0) {
               ans = false;
               break;
           }
       }

       cout << ans;
       return 0;
   }
