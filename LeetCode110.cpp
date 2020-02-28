/*************************************************************************
	> File Name: LeetCode110.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 18时05分05秒
 ************************************************************************/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/*int get(struct TreeNode *root) {
    if(root == NULL) return 0;
    return((get(root->left) > get(root->right)) ? get(root->left) : get(root->right) ) + 1;
}

bool isBalanced(struct TreeNode* root){
    if(root == NULL) return true;
    if(abs(get(root->left) - get(root->right)) > 1) {
        return false;
    }else{
        return isBalanced(root->left) && isBalanced(root->right);
    }
}*/
int maxDepth(struct TreeNode* root) {
    if (root == NULL) return 0;
    int d1 = maxDepth(root->left);
    int d2 = maxDepth(root->right);
    if (d1 == -2 || d2 == -2 || abs(d1 - d2) > 1) return -2;
    return fmax(d1, d2) + 1;
}

bool isBalanced(struct TreeNode* root) {
    return maxDepth(root) >= 0;
}
