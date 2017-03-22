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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
       int mid,start=0,end=nums.size();
       if(nums.size()==0)
       {
           return nullptr;
       }
       if(nums.size()==1)
       {
           return new TreeNode(nums[0]);
       }
       return sortedArrayToBST(nums,start,end);
    }
     TreeNode* sortedArrayToBST(vector<int>& nums,int start,int end)
    {
        if(end<=start)
        {
            return nullptr;
        }
        int mid;
        mid=(end+start)/2;
        TreeNode* root=new TreeNode(nums[mid]);
        root->left=sortedArrayToBST(nums,start,mid);
        root->right=sortedArrayToBST(nums,mid+1,end);
        return root;
    }
};
