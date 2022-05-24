#include "bits/stdc++.h"
using namespace std;

int main(int argc, char const *argv[]) {
  string s = "anagarm";
  string t = "naagram";
  // logic
  if(s.size() != t.size())
        cout << false;

       unordered_map<char, int> sMap;


       for(int i=0; i<s.size(); i++) {
           sMap[s[i]]++;
           sMap[t[i]]--;
       }

       for(auto it=sMap.begin(); it!=sMap.end(); it++) {
           if(it->second != 0) {
               cout << "False";
               break;
           }
       }

       cout << "True";
       return 0;
   }
