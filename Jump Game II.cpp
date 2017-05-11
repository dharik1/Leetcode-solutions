class Solution {
public:
    int jump(vector<int>& nums) {
        int curr=0;
        int cnt=0,m=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            m=max(m,i+nums[i]);
            if(i==curr)
            {
                cnt++;
                curr=m;
            }
        }
        return cnt;
    }
};
