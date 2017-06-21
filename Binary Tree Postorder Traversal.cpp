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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> v;
        stack<TreeNode*> s;
        if(root==NULL)
        {
            return v;
        }
        if(!root->left && !root->right)
        {
            v.push_back(root->val);
            return v;
        }
        s.push(root);
        while(!s.empty())
        {
                root=s.top();
                v.push_back(root->val);
                s.pop();
                if(root->left)
                {
                    s.push(root->left);
                }
                if(root->right)
                {
                    s.push(root->right);
                }
        }
            reverse(v.begin(),v.end());
     return v;
    }
};
