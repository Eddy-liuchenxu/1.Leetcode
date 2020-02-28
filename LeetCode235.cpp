/*************************************************************************
	> File Name: LeetCode235.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 17时52分47秒
 ************************************************************************/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
     if(root == NULL){
        return NULL;
    }
    if(q->val > root->val && p->val > root->val){
         return lowestCommonAncestor(root->right , p, q);
    }else if(q->val < root->val && p->val < root->val){
         return lowestCommonAncestor(root->left , p, q);
    }
    return root;
}
