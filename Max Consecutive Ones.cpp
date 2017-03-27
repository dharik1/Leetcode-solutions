class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        if(nums.size()==0)
        {
            return 0;
        }
        int max1=-1,max2=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                max1=max(max1,max2);
                max2=0;
            }
            else{
                max2+=nums[i];
            }
        }
        max1=max(max1,max2);
        return max1;
    }
};
