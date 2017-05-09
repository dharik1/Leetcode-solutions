class Solution {
public:
    void perm(vector<int> nums,int i,int j,vector<vector<int>>& v)
    {
        if(i==j-1)
        {
            v.push_back(nums);
            return;
        }
        for(int k=i;k<j;k++)
        {
            if(i!=k && nums[i]==nums[k]) 
            {
                continue;
            }
            swap(nums[i],nums[k]);
            perm(nums,i+1,j,v);
        }
    }
     vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> v;
        perm(nums,0,nums.size(),v);
        return v;
    }
};
