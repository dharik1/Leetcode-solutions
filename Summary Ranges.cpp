class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> v;
        if(nums.size()==0)
        {
            return v;
        }
        for(int i=0;i<nums.size();)
        {
            int s=i,e=i;
            while(e+1<nums.size() && nums[e+1]==nums[e]+1)
            {
                e++;
            }
            if(e>s && e<nums.size())
            {
                v.push_back(to_string(nums[s])+"->"+to_string(nums[e]));
            }
            else{
                v.push_back(to_string(nums[s]));
            }
            i=e+1;
        }
        return v;
    }
};
