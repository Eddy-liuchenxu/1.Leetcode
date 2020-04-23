/*************************************************************************
	> File Name: LeetCode501.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年04月23日 星期四 17时17分28秒
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
    int max = 1;
    int cnt = 1;
    vector<int> v;
    void binary_seach(TreeNode *root){
        if(root == NULL) return;
        binary_seach(root->left);
        v.push_back(root->val);
        binary_seach(root->right);
        return;
    }
    vector<int> findMode(TreeNode* root) {
        binary_seach(root);
        if(v.empty()) return vec;
            vec.push_back(v[0]);
        for(int i = 1; i < v.size(); i++){
            if(v[i] == v[i-1]){
                cnt++;
            }else{
                cnt = 1;
            }
            if(max == cnt){
                vec.push_back(v[i]);

            }else if(max < cnt){
                vec.clear();
                vec.push_back(v[i]);
                max = cnt;
            }
        }
     
        
        return vec;
    }
};
