class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        if(n<2)
        {
            return n;
        }
        int *a=new int [n];
        int max=-1;
        for(int i=0;i<n;i++)
        {
            a[i]=1;
        }
       // memset(a,1,sizeof(a));
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[i]>nums[j] && a[i]<(a[j]+1))
                {
                    a[i]=a[j]+1;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
            }
        }
        free(a);
        return max;
    }
};
