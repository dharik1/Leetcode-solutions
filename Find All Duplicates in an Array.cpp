class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int i=0;
        vector<int> v;
         while(i<nums.size())
        {
            if(nums[i]!=nums[nums[i]-1])
            {
                swap(nums[i],nums[nums[i]-1]);
            }
            else{
                i++;
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=i+1)
            {
                v.push_back(nums[i]);
            }
            //cout<<nums[i]<<" ";
        }
        return v;
    }
};
