/*************************************************************************
	> File Name: LeetCode563.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年04月28日 星期二 23时54分51秒
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
int ans = 0;

    int findTilt(TreeNode* root) {
         deep_tree(root);
         return ans;
    }
    int deep_tree(TreeNode *root){
        if(root == NULL) return 0;
        int sum_l =  deep_tree(root->left);
        int sum_r =  deep_tree(root->right);
        ans+= abs(sum_l  - sum_r);
        return sum_l + sum_r+ root->val;
    }
};
