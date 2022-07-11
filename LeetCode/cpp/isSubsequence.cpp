#include "iostream"
#include "string"
using namespace std;

bool isSubsequence(string s, string t) {
       
        int n = s.length(), m = t.length();
        int j = 0; 
        
        for (int i = 0; i < m and j < n; i++)
            if (s[j] == t[i])
                j++;
 
        return (j == n);
        
    }

int main(int argc, char const *argv[])
{
	string s = "arpit";
	string t = "arpit chugh";
	cout << isSubsequence(s,t);
	return 0;
}