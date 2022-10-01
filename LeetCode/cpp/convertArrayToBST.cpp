/*
Given an integer array nums where the elements are sorted in ascending order, convert it to a height-balanced binary search tree.

A height-balanced binary tree is a binary tree in which the depth of the two subtrees of every node never differs by more than one.
*/

#include <iostream>
#include <vector>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        return helper(nums, 0, nums.size() - 1);
    }

    TreeNode *helper(vector<int> &nums, int left, int right)
    {

        // base case
        // If the left pointer crosses right return null;
        if (left > right)
        {
            return NULL;
        }

        // as middle of the array will be the root node
        int mid = (left + right) / 2;
        TreeNode *temp = new TreeNode(nums[mid]);

        // left part from middle will be left subtree
        temp->left = helper(nums, left, mid - 1);

        // right part of array will be right subtree
        temp->right = helper(nums, mid + 1, right);
        return temp;
    }
};

int main(){
    Solution s;
    vector<int> nums = {-10,-3,0,5,9};
    TreeNode *root = s.sortedArrayToBST(nums);
    // print binary tree
    while(root != NULL){
        cout << root->val << " ";
        root = root->right;
    }
    return 0;
}