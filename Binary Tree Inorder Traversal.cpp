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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        stack<TreeNode*> s;
        if(!root)
        {
            return v;
        }
        if(!root->left && !root->right)
        {
            v.push_back(root->val);
            return v;
        }
        TreeNode *pr=root;
        while(!s.empty() || pr!=NULL)
        {
            if(!pr)
            {
                TreeNode *p=s.top();
                v.push_back(p->val);
                s.pop();
                pr=p->right;
            }
            else{
                s.push(pr);
                pr=pr->left;
            }
        }
        return v;
    }
};
