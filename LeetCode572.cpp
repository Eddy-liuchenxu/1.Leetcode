/*************************************************************************
	> File Name: LeetCode572.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年04月26日 星期日 23时11分11秒
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
    bool isSubtree(TreeNode* s, TreeNode* t) {
       if(s != nullptr){
           if(trueorflase(s,t)){
               return true;
           }
           return isSubtree(s->left,t) || isSubtree(s->right,t);
       }
       return false;
    }
    bool trueorflase(TreeNode *s, TreeNode *t){
        if(s == nullptr && t == nullptr){
            return true;
        }
        if(s== nullptr || t == nullptr){
            return false;
        }
        if(s->val != t->val){
            return false;
        }
        return trueorflase(s->left,t->left) && trueorflase(s->right,t->right);
    }
};
