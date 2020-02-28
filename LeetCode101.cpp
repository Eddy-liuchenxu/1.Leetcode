/*************************************************************************
	> File Name: LeetCode101.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 18时04分04秒
 ************************************************************************/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool func(struct TreeNode *l,struct TreeNode *r) {
    if(l == NULL && r == NULL ) {
        return true;
    }else if(l == NULL || r == NULL) {
        return false;
    }else if(l->val == r->val){
        return func(l->left,r->right) && func(r->left,l->right);
    }else{
        return false;
    }
}

bool isSymmetric(struct TreeNode* root){
    if(root == NULL) return true;
    return func(root->left,root->right);
}
