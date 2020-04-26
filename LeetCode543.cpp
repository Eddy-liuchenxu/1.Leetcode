/*************************************************************************
	> File Name: LeetCode543.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年04月26日 星期日 23时41分36秒
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
int ans;
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == nullptr){
            return 0;
        }
        deep(root);
        return ans - 1;

    }
    int deep(TreeNode *root){
        if(root == nullptr){
            return 0;
        }
        int ldeep = deep(root->left);
        int rdeep = deep(root->right);
        ans = max(ans,ldeep + rdeep + 1);
        return max(ldeep,rdeep) + 1;
    }

};
