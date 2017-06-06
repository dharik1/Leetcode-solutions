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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        queue<TreeNode *> q;
        if(root==nullptr)
        {
            return v;
        }
        q.push(root);
        while(!q.empty())
        {
            vector<int> vv;
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode *t=q.front();
                q.pop();
                vv.push_back(t->val);
                if(t->left)
                {
                    q.push(t->left);
                }
                if(t->right)
                {
                    q.push(t->right);
                }
            }
            v.push_back(vv);
        }
        return v;
    }
};
