class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int i=0,j=nums.size()-1,cnt=0;
        sort(nums.begin(),nums.end());
        while(i<j)
        {
            cnt+=nums[j]-nums[i];
            i++;
            j--;
        }
        return cnt;
    }
};
