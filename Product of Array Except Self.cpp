class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1;
        int cnt=0;
        //the main typo is count of zero's
        for(int i=0;i<nums.size();i++)
        {
         if(nums[i]==0)
         {
             cnt++;
         }
         //product*=nums[i];
        }
        if(cnt>1)
        {
        for(int i=0;i<nums.size();i++)
        {
                nums[i]=0;
        }
        }
        else if(cnt==1)
        {
        for(int i=0;i<nums.size();i++)
         {
         if(nums[i]==0)
         {
            continue;
         }
         else
         {
         product*=nums[i];
         }
         }
         for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                nums[i]=product;
            }
            else{
                 nums[i]=0;
            }
        }
        }
        else{
            for(int i=0;i<nums.size();i++)
        {
         product*=nums[i];
        }
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=product/nums[i];
        }
        }
        return nums;
    }
};
