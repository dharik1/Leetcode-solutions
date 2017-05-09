class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int l=nums.size()-1;
        while(nums[l]<=nums[l-1])
        {
            l--;
            if(l==-1)
            {
                break;
            }
        }
        l--;
        if(l<0)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        //int tmp=nums[l];
        else{
        int i=nums.size()-1;
        while(nums[l]>=nums[i])
        {
            i--;
        }
        cout<<i<<l;
        if(i>=l)
        {
            int t=nums[l];
            nums[l]=nums[i];
            nums[i]=t;
        }
        l++;
        i=nums.size()-1;
        cout<<i<<l;
        while(i>l)
        {
           int t=nums[l];
            nums[l]=nums[i];
            nums[i]=t; 
            l++;
            i--;
        }
        }
    }
};
