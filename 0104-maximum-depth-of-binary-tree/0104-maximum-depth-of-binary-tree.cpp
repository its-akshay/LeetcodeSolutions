
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
	int maxDepth(TreeNode* root) {
		queue<TreeNode*>q;
		q.push(root);
        if(root==NULL){
            return 0;
        }
		int height = 0;
		while (!q.empty()) {
			int size = q.size();
			for (int i = 0; i < size; i++)
			{
				TreeNode*x = q.front();
				q.pop();

				if (x->left != NULL) {
					q.push(x->left);
				}
				if (x->right != NULL) {
					q.push(x->right);
				}
			}
			height++;
		}
		return height;
	}
};