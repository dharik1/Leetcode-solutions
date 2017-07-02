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
    int m=INT_MIN;
    int maxPathSum(TreeNode* root) {
         mx(root);
        return m;
    }
    int mx(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int l=max(0,mx(root->left));
  
        int r=max(0,mx(root->right));
        m=max(m,l+r+root->val);
        return max(l,r)+root->val;
    }
};
