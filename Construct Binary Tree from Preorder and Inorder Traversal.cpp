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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return b(0,0,inorder.size()-1,preorder,inorder);
    }
    TreeNode* b(int ps,int is,int id,vector<int>& p, vector<int>& i)
    {
        if(ps>p.size()-1 || is>id)
        {
            return nullptr;
        }
        TreeNode* root=new TreeNode(p[ps]); 
        int ind;
        for(int j=is;j<=id;j++)
        {
            if(i[j]==root->val)
            {
                ind=j;
            }
        }
        root->left=b(ps+1,is,ind-1,p,i);
        root->right=b(ps+ind-is+1,ind+1,id,p,i);
        return root;
    }
};
