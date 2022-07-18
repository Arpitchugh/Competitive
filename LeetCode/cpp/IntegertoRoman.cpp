#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

class Solution {
public:
    string intToRoman(int num) {
         unordered_map<int,string>mp = {{1,"I"},{5,"V"},{10,"X"},{50,"L"},{100,"C"},{500,"D"},{1000,"M"}};
        
        int x=1;
        string ans="";
        while(num>0)
        {
            int d=num%10;                           // Last digit of a number
            d*=x;                                   // Multiply by its place value (like 1, 10, 100, 1000)
            while(d>0)
            {
                if(mp.find(d)!=mp.end()){           // find the digit in the map - direct 
                    ans = mp[d] + ans;
                    d = 0;
                } 
                else if(mp.find(d+x)!=mp.end())      // or find the approx nearest in the map. // like 40 nearest to 50
                {
                    ans = mp[x] + mp[d+x] + ans;
                    d = 0;
                }
                else                            // iterate the place value mapped value until it matches the map value
                {
                    ans = mp[x] + ans;
                    d -= x;
                } 
            }
            num/=10; // remove the last digit from the number
            x*=10; // increment the place value.
        }
        return ans;
    }
    
};

int main(){
    Solution ans;
    int value =3003;
    cout << ans.intToRoman(value);
    return 0;
}