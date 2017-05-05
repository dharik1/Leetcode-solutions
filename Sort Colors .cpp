class Solution {
public:
    void sortColors(vector<int>& nums) {
        int m=0,c=0,h=nums.size()-1;
        while(m<=h)
        {
            if(nums[m]==0)
            {
                swap(nums[c++],nums[m++]);
            }
            else if(nums[m]==1){
                m++;
            }
            else{
                swap(nums[h--],nums[m]);
            }
        }
    }
};
