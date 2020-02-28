/*************************************************************************
	> File Name: LeetCode111.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 18时05分26秒
 ************************************************************************/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int minDepth(struct TreeNode* root){
    if(root == NULL) return 0;
    if(root->left == NULL && root->right != NULL ) return 1 + minDepth(root->right);
    if(root->left != NULL && root->right == NULL ) return 1 + minDepth(root->left);
    return ((minDepth(root->left) < minDepth(root->right)) ? minDepth(root->left) : minDepth(root->right))+1;
}
