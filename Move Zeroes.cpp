class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zcnt=0,j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                zcnt++;
            }
            else{
                nums[j++]=nums[i];
            }
        }
        while(zcnt--)
        {
            nums[j++]=0;
        }
    }
};
