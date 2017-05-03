class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int m;
        vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
            m=abs(nums[i])-1;
            if(nums[m]>0)
            {
                nums[m]=-nums[m];
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                v.push_back(i+1);
            }
            //cout<<nums[i]<<" ";
        }return v;
    }
};
