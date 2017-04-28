class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size(),sum;
        sum=((n)*(n+1))/2;
        for(int i=0;i<nums.size();i++)
        {
            sum-=nums[i];
        }
        //n=n-sum;
        return sum;
    }
};
