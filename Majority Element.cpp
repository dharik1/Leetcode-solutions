class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=1,min=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[min])
            {
                cnt++;
            }
            else{
                cnt--;
            }
            if(cnt<=0)
            {
                min=i;
                cnt=1;
            }
        }
        return nums[min];
    }
};
