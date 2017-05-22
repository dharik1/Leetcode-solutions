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
        int t=fun(nums,0,nums.size()-2);
        int t1=fun(nums,1,nums.size()-1);
        return max(t,t1);
    }
    int fun(vector<int>& nums,int l,int r)
    {
        int p=nums[l];
        int c=max(nums[l],nums[l+1]);
        for(int i=l+2;i<=r;i++)
        {
            int t=max(nums[i]+p,c);
            p=c;
            c=t;
        }
        return c;
    }
};
