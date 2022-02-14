Program
#include <bits/stdc++.h>
using namespace std;
int getInteger(char c)
{
   switch(c)
   {
       case 'I' : return 1;
       case 'V' : return 5;
       case 'X' : return 10;
       case 'L' : return 50;
       case 'C' : return 100;
       case 'D' : return 500;
       case 'M' : return 1000;
       default : return -1;
   }
}
int romanToInt(string s)
{
   int n = s.size() , ans = 0 , current , next , i = 0;
   while(i < n)
   {
       if(i == n - 1)
       {
           ans += getInteger(s[i]);
           return ans;
       }
       current = getInteger(s[i]) , next = getInteger(s[i + 1]);
       if(current >= next)
           ans += current , i++;
       else
           ans += next - current , i += 2;
   }
   return ans;
}
int main()
{
   string s = "CXXIX";
   cout << romanToInt(s) << '\n';
   return 0;
}
