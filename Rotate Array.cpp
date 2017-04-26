class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k%=nums.size();
        rev(nums,0,nums.size()-1);
        rev(nums,0,k-1);
        rev(nums,k,nums.size()-1);
    }
    private:
    void rev(vector<int>& nums, int l,int r)
    {
        while(l<r)
        {
            int t=nums[l];
            nums[l++]=nums[r];
            nums[r--]=t;
            
        }
    }
};
