class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> v;
        sort(nums.begin(),nums.end());
        perm(nums,0,v);
        return v;
    }
    void perm(vector<int>& nums,int i,vector<vector<int>>& v)
    {
        if(i==nums.size()-1)
        {
            v.push_back(nums);
            return;
        }
        for(int k=i;k<nums.size();k++)
        {
            if(i!=k && nums[i]==nums[k]) 
            {
                continue;
            }
            swap(nums[i],nums[k]);
            perm(nums,i+1,v);
        }
    }
};
