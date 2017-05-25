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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> v;
        if(root==NULL)
        {
            return v;
        }
        if(root!=NULL &&root->left==NULL && root->right==NULL)
        {
            v.push_back(root->val);
            return v;
        }
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            {
            TreeNode* t=q.front();
            q.pop();
            if(i+1 == n)
            {
            v.push_back(t->val);
            }
            if(t->left)
            {
                q.push(t->left);
            }
            if(t->right)
            {
                q.push(t->right);
            }
         }
       }
       return v;
    }
};
