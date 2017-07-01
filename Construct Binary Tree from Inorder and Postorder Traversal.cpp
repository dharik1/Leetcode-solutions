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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return b(0,inorder.size()-1,postorder.size()-1,inorder,postorder);
    }
    TreeNode* b(int is,int id,int pe,vector<int>& in, vector<int>& po)
    {
        if(is>id || pe<0)
        {
            return nullptr;
        }
        TreeNode* root=new TreeNode(po[pe]);
        int ind;
        for(int i=is;i<=id;i++)
        {
            if(root->val==in[i])
            {
                ind=i;
            }
        }
        root->left=b(is,ind-1,pe-(id-ind)-1,in,po);
        root->right=b(ind+1,id,pe-1,in,po);
        return root;
    }
};
