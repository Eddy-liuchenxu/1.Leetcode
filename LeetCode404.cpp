/*************************************************************************
	> File Name: LeetCode404.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年04月26日 星期日 16时51分26秒
 ************************************************************************/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
int sum = 0;
    int sumOfLeftLeaves(TreeNode* root) {
        if(root == nullptr) return 0;
        if(root->left != nullptr && (root->left->left == nullptr && root->left->right == nullptr)){
            sum += root->left->val;
        }
        sumOfLeftLeaves(root->left);
        sumOfLeftLeaves(root->right);
        return sum;
        
    }
};
