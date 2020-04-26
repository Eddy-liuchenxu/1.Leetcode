/*************************************************************************
	> File Name: LeetCode257.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年04月26日 星期日 16时36分43秒
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
    vector<string> vec;
    string pa;
    vector<string> binaryTreePaths(TreeNode* root) {
        allsearch(root,pa);
        return vec;
    }
    void allsearch(TreeNode *root,string path){
       if(root == NULL) return;
       if(!root->left&&!root->right){
           path += to_string(root->val);
           vec.push_back(path);
           return ;
       }
       path += to_string(root->val);
       path += "->";
        allsearch(root->left,path);
        allsearch(root->right,path);
        return;
    }
};
