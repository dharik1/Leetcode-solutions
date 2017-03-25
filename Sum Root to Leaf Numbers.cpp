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
    int sumNumbers(TreeNode* root) {
        
        return sum(root,0);
    }
    int sum(TreeNode* root,int x)
    {
        if(root==nullptr)
        {
            return 0;
        }
        x=x*10+root->val;
        if(!root->left && !root->right)
        {
            return x;
        }
        return sum(root->left,x)+sum(root->right,x);
    }
};
