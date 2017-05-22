class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==0)
        {
            return 0;
        }
        if(nums.size()==1)
        {
            return nums[0];
        }
        int p=nums[0];
        int c=max(nums[0],nums[1]);
        for(int i=2;i<nums.size();i++)
        {
            int t=max(nums[i]+p,c);
            p=c;
            c=t;
        }
        return c;
    }
};
