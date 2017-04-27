class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<3)
        {
            return nums.size();
        }
        int cnt=1,j=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1])
            {
                nums[j++]=nums[i];
                cnt=1;
            }
            else if(nums[i]==nums[i-1] && cnt<2)
            {
                nums[j++]=nums[i];
                cnt++;
            }
        }
       /* for(int i=0;i<nums.size();i++)
        {
            cout<<nums[i]<<" ";
        }*/
        return j;
    }
};
