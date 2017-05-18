class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int ss=0,j=0,m=INT_MAX,i=0;
        while(i<nums.size())
        {
            ss+=nums[i++];
        
        //i++;
        while(ss>=s)
        {
            m=min(m,i-j);
            ss-=nums[j++];
        }
        }
        return (m==INT_MAX)?0:m;
    }
};
