class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i=0;
        for(i=0;i<nums.size();i++)
        {
            while(nums[i]!=nums[nums[i]-1] && nums[i]>0 && nums[i]<=nums.size())
            {
                swap(nums[i],nums[nums[i]-1]);
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=(i+1))
            {
                return i+1;
            }
        }
        return nums.size()+1;
    }
};
