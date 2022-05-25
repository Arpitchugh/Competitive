#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    bool isPalindrome(string s) {
//         transform(s.begin(), s.end(), s.begin(), ::tolower);

//         int l = 0;
//         int r = s.length();

//         while(l!=r or l<r){
//             if(s[l] == s[r]) return true;
//             else if(65 >= char(s[l]) >= 90 or 97 >= char(s[l]) >= 122){
//                 l++;
//             }
//             else if(65 >= char(s[r]) >= 90 or 97 >= char(s[r]) >= 122){
//                 r--;
//             }
//             else return false;
//         }
//         return true;
//     }
    string str;
    for(int i=0;i<s.length();i++){

        if(s[i]>=65 && s[i]<=90){
            s[i]=s[i]+32;
            str.push_back(s[i]);
        }
        else if(s[i]>=97 && s[i]<=122) str.push_back(s[i]);
        else if(s[i]>=48 && s[i]<=57) str.push_back(s[i]);

    }
    int start=0;
    int end=str.size()-1;
    while(start<end) {

        if(str[start]!=str[end])
            return false;
        else{
            start++;
            end--;
        }
    }
    return true;
    }
};

int main(){
  string s = "A man, a plan, a canal: Panama";
  solution sol;
  cout << sol.isPalindrome(s);
  return 0;
}
