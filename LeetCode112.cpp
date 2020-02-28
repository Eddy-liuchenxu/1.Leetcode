/*************************************************************************
	> File Name: LeetCode112.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 18时05分49秒
 ************************************************************************/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool hasPathSum(struct TreeNode* root, int sum){
    if(root == NULL) return false;
        if(root->left ==NULL && root->right == NULL) return sum == root->val;
        return hasPathSum(root->left,sum -root->val) || hasPathSum(root->right,sum - root->val);
}
