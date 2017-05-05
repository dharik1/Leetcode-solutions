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
    int mi=INT_MAX,prev=-999;
public:
    int getMinimumDifference(TreeNode* root) {
        if(root==nullptr)
        {
            return mi;
        }
        getMinimumDifference(root->left);
        if(prev!=-999)
        {
            mi=min(mi,root->val-prev);
        }
        prev=root->val;
        getMinimumDifference(root->right);
        return mi;
    }
};
