/*
73. Set Matrix Zeroes
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
You must do it in place.

Example 1:
Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]
*/
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        bool set = false;
    
        for( int i = 0 ; i < n; i++){
            if( matrix[i][0] == 0)  set = true;
            for(int j = 1 ; j < m ; j++){
                if( matrix[i][j] == 0){
                    matrix[0][j] = matrix[i][0] = 0 ;
                }
            }
        }   
    
        for(int i = n-1; i >= 0; i--){
            for( int j = m-1 ; j >= 1 ; j--){
                if(matrix[0][j] == 0 || matrix[i][0] == 0)
                     matrix[i][j] = 0 ;
            }
            if( set == true) matrix[i][0] = 0;
        }
    
    }
};

int main(){
    Solution s;
    vector<vector<int>> matrix = {{0,1,2,0},{3,4,5,2},{1,3,0,5}};
    s.setZeroes(matrix);
    for(int i =0; i<matrix.size();i++){
        for(int j =0; j<matrix[0].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}