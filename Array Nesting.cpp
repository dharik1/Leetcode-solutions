class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int m=1,n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]<0)
            {
                continue;
            }
            int b=nums[i],temp=1;
            while(abs(b)!=i)
            {
                temp++;
                //cout<<b<<" ";
                b=nums[abs(b)];
                nums[abs(b)]*=-1;
            }
            m=max(m,temp);
        }
        return m;
    }
};
