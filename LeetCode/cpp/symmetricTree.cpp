/*
    Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).
*/

#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    bool solve(TreeNode* p, TreeNode* q){
        if(!p && !q)
            return true;
        
        if((!p && q) || (p && !q))
            return false;
        
        if(p->val != q->val)
            return false;
        
        return solve(p->left, q->right) && solve(p->right, q->left);
    }
    bool isSymmetric(TreeNode* root) {
        return solve(root->left,root->right);    
    }
};

int main(){
    Solution s;
    TreeNode* root = new TreeNode();
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(3);
    cout << s.isSymmetric(root) << endl;
    return 0;
}