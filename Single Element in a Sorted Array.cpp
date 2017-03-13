class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int k=0;
        for(int i=0;i<nums.size();i++)
        {
            k^=nums[i];
        }
        return k;
    }
};
