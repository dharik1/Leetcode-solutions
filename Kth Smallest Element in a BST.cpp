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
    int r,cnt=0;
public:
    int kthSmallest(TreeNode* root, int k) {
        
        kk(root,k);
        return r;
    }
    void kk(TreeNode* root, int k)
    {
        if(root==nullptr)
        {
            return;
        }
            kk(root->left,k);
          cnt++;
            if(k==cnt)
            {
                r=root->val;
                return;
            }
            kk(root->right,k);
    }
};
