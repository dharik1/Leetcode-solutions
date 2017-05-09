class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int x=nums[0],y=nums[nums[0]];
        //for(int i=0;i<nums.size();i++)
        while(x!=y)
        {
           x=nums[x];
           y=nums[nums[y]];
        }
         //for(int i=0;i<nums.size();i++)
        y=0;
        while(x!=y){
        // cout<<nums[i]<<" ";   
        x=nums[x];
        y=nums[y];    
        }
        return x;
    }
};
