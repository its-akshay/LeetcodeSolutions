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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) { 
        if(root==NULL)return {};
        vector<vector<int>> ans;
         queue<TreeNode *> q;
         q.push(root);
        int level=0;
         while(!q.empty()){
            int s=q.size();
            vector<int> path;
            for(int i=0;i<s;i++){
               auto node=q.front();
                q.pop();
                path.push_back(node->val);
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
            if(level%2!=0)reverse(path.begin(),path.end());
            ans.push_back(path);
            level++;
         }
         return ans;
    }
};