class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        //int cnt=0;
        if(k<0)
        {
            return 0;
        }
        unordered_map<int,int> m;
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++)
        {
            if(m.count(nums[i]-k))
            {
                s.insert(nums[i]-k);
            }
            if(m.count(nums[i]+k))
            {
                s.insert(nums[i]);
            }
            m[nums[i]]++;
        }
        return s.size();
    }
};
