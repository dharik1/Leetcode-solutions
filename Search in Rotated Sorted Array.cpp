class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==0)
        {
            return -1;
        }
        int l=0,r=nums.size()-1,mid;
        
        while(l<r)
        {
            mid=(l+r)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            if(nums[l]<=nums[mid])
            {
            if(nums[l]<=target && nums[mid]>target)
            {
                r=mid-1;
            }
            else{
                l=mid+1;
            }
            }
            else{
                if(nums[r]>=target && nums[mid]<target)
                {
                   l=mid+1; 
                }
                else{
                    r=mid-1;
                }
            }
        }
        return nums[l]==target?l:-1;
    }
};
