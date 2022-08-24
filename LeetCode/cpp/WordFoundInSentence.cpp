/*
A sentence is a list of words that are separated by a single space with no leading or trailing spaces.
You are given an array of strings sentences, where each sentences[i] represents a single sentence.
Return the maximum number of words that appear in a single sentence.
*/

#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
    public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords = 0;
        for(auto i:sentences) {
            int count =0;
            for(auto j:i) {
                if(j==' ') count++;
            }
            if(count>maxWords) maxWords = count;
        };
        return maxWords+1;
    }
    
};

int main(){
    Solution s;
    vector<string> sentences = {"alice and bob love leetcode", "i think so too", "this is great thanks very much"};
    cout<<s.mostWordsFound(sentences);
    return 0;
}