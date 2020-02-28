/*************************************************************************
	> File Name: LeetCode100.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 18时07分23秒
 ************************************************************************/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


/*bool isSameTree(struct TreeNode* p, struct TreeNode* q){
    if(p->val != q->val) return 0;
    if(p->left != NULL && q->left != NULL) {
        isSameTree(p->left ,q->left);
    }
    if(p->right != NULL && q->right != NULL) {
        isSameTree(p->right ,q->right);
    }
    return 1;
}*/
bool isSameTree(struct TreeNode* p, struct TreeNode* q){
	if(p == NULL && q == NULL){
		return true;
	}else if(p == NULL &&  q != NULL){
			return false;
	}else if (p != NULL &&  q == NULL){
		return false;
	}else {
		if(p->val != q->val){
			return false;
		}else {
			return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
		}
	}
}
