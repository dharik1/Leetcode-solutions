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
    bool isValidBST(TreeNode* root) {
        TreeNode *p=NULL;
        return valid(root,p);
    }
    bool  valid(TreeNode* root,TreeNode* &p)
    {
        if(root==NULL)
        {
            return 1;
        }
        if(!valid(root->left,p))
        {
            return 0;
        }
        if(p!=NULL && root->val<=p->val)
        {
            return 0;
        }
        p=root;
        return valid(root->right,p);
    }
};
