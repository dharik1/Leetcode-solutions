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
    bool isBalanced(TreeNode* root) {
        return is(root)!=-1;
    }
    int is(TreeNode* root)
    {
        if(!root)
        {
            return 0;
        }
        int l=is(root->left);
        if(l==-1) return -1;
        int r=is(root->right);
        if(r==-1) return -1;
        if(abs(l-r)>1)
        {
            return -1;
        }
        return max(l,r)+1;
    }
};
