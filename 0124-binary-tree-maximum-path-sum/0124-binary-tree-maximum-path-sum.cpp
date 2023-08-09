/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int fun(TreeNode*root,int& maxi){
         if(root==NULL){
            return 0;
        }
        int l = max(0,fun(root->left,maxi));
        int r = max(0,fun(root->right,maxi));
        int data = root->val;
         maxi = max(maxi, (l + r) + data);
        return max(l, r) + data;
    }
    int maxPathSum(TreeNode* root) {
       int maxi = INT_MIN;
        fun(root,maxi);
        return maxi;
    }
};