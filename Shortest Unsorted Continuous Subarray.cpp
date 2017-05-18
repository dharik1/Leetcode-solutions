class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        int s=-1,e=-2,ma=nums[0],mi=nums[n-1];
        
        for(int i=1;i<n;i++)
        {
            mi=min(mi,nums[n-i-1]);
            ma=max(ma,nums[i]);
            if(ma>nums[i])
            {
                e=i;
            }
            if(mi<nums[n-i-1])
            {
                s=n-i-1;
            }
        }
        return e-s+1;
    }
};
