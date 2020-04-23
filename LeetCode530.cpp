/*************************************************************************
	> File Name: LeetCode530.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年04月23日 星期四 17时28分30秒
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
    vector<int> vec;
    int min = INT_MAX;
    int getMinimumDifference(TreeNode* root) {
        getvalue(root);
        for(int i  = 0; i < vec.size()-1; i++){
            if(abs(vec[i + 1] - vec[i]) < min){
                min = abs(vec[i + 1]-vec[i]);
            }
        }
        return min;
    }
    void getvalue(TreeNode *root){
        if(root == NULL) return ;
        getvalue(root->left);
        vec.push_back(root->val);
        getvalue(root->right);
    }
};
