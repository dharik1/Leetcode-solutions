class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size()==1)
        {
            return nums[0];
        }
        int r=nums[0],mn=nums[0],mx=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                swap(mn,mx);
            }
                mn=min(nums[i],nums[i]*mn);
                mx=max(nums[i],nums[i]*mx);
            r=max(r,mx);
        }
        return r;
    }
};
