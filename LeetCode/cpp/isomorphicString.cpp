#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool isIsomorphic(string s, string t) {
        unordered_map<char, char> schar, tchar;
        for(int i=0; i<s.size(); ++i){
            if(schar[s[i]]){
                if(schar[s[i]]!=t[i]) return false;
            }
            else{
                if(tchar[t[i]]) return false;
                schar[s[i]]=t[i], tchar[t[i]]=s[i];
            }
        }
    return true;
}

int main(){
    string s = "egg";
    string t = "add";
    cout << isIsomorphic(s,t);
    return 0;
}