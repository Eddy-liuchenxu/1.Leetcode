/*************************************************************************
	> File Name: LeetCode面试题04.04.检查平衡性.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年04月28日 星期二 23时01分11秒
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
    bool isBalanced(TreeNode* root) {
        if(root == NULL) return true;
        if(abs(deep_tree(root->left)-deep_tree(root->right)) <= 1 && isBalanced(root->left) && isBalanced(root->right)){
            return true;
        }
        return false;
    }
    int deep_tree(TreeNode *root){
        if(root == NULL) return 0;
        int l = deep_tree(root->left);
        int r = deep_tree(root->right);
        return max(l,r) + 1;
    }
};
