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
    void rec(vector<int>&ans,int level,TreeNode*root){
        if(root==NULL){
            return;
        }
        if(ans.size()==level){
            ans.push_back(root->val);
        }
        rec(ans,level+1,root->right);
        rec(ans,level+1,root->left);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        rec(ans,0,root);
        return ans;
    }
};