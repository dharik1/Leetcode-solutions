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
    vector<int> findFrequentTreeSum(TreeNode* root) {
        unordered_map<int,int> mp;
        int mc=0;
        find(root,mp,mc);
        vector<int> s;
        for(const auto& i:mp)
        {
            if(i.second==mc)
            {
                s.push_back(i.first);
            }
        }
        return s;
    }
    int find(TreeNode* root,unordered_map<int,int>& mp,int& mc)
    {
        if(!root)
        {
            return 0;
        }
        int sum=root->val;
        sum+=find(root->left,mp,mc);
        sum+=find(root->right,mp,mc);
        ++mp[sum];
        mc=max(mc,mp[sum]);
        return sum;
    }
};
