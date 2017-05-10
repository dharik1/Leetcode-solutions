class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        while(l<r)
        {
            int m=(l+r)/2;
            int m1=m+1;
            if(nums[m]<nums[m+1])
            {
                l=m+1;
            }
            else{
                r=m;
            }
        }
        return l;
    }
};
