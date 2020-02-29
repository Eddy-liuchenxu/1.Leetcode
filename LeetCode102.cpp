/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
  int getDepth(struct TreeNode *root){
     if(root == NULL) return 0;
     int l = getDepth(root->left), r = getDepth(root->right);
     return (l > r ? l : r) + 1;
 }
 void getcnt(struct TreeNode *root, int k, int *cnt){
     if(root==NULL) return;
     cnt[k] += 1;
     getcnt(root->left,k+1,cnt);
     getcnt(root->right, k + 1, cnt);
 }
 void getresult(struct TreeNode *root, int k,int *cnt,int **ret) {
     if(root == NULL) return;
     ret[k][cnt[k]++] = root->val;
     getresult(root->left,k+1,cnt,ret);
     getresult(root->right, k + 1, cnt ,ret);
 }
int** levelOrder(struct TreeNode* root, int* returnSize, int** returnColumnSizes){
    int depth = getDepth(root);
int **ret = (int **)malloc(sizeof(int *) * depth);
int *cnt = (int *)calloc(depth,sizeof(int));
getcnt(root,0,cnt);
for(int i = 0; i < depth; i++) {
    ret[i] = (int *)malloc(sizeof(int) * cnt[i]);
    cnt[i] = 0;
}
getresult(root,0,cnt,ret);
*returnSize = depth;
*returnColumnSizes = cnt;
return ret;
}
