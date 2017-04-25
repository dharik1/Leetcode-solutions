class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int msf=nums[0],med=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            msf=max(msf+nums[i],nums[i]);
            if(msf>med)
            {
                med=msf;
            }
            
        }
        return med;
    }
};
