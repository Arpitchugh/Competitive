/*

The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"

Write the code that will take a string and make this conversion given a number of rows:

string convert(string s, int numRows);

*/


class Solution {
public:
    string convert(string s, int numRows) {
       if(numRows==1 || numRows>=s.length()) return s;
        string res = "";
           
        for(int j=0;j<numRows;j++){
            res+=s[j];
            int x=j;
            while(x<s.length()){
                int y= (numRows-j-1)*2;
                x=x+y;
                if(y!=0 && x<s.length()) res+=s[x];
                
                y=j*2;
                x=x+y;
                if(y!=0 && x<s.length()) res+=s[x];
            }
        }
        
        return res;
    }
};

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;
        string ans;
        int next = 2 * (numRows - 1);
        for (int i = 0; i < numRows; i++) {
            for (int j = i; j < s.size(); j += next) {
                ans += s[j];
                if (i > 0 && i < numRows - 1 && j + next - 2 * i < s.size()) ans += s[j + next - 2 * i];
            }
        }
        return ans;
    }
};