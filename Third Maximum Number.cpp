class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int f=-1;
        int s=-1,t=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==f || nums[i]==s || nums[i]==t) 
            {
                continue;
            }
            if(f<nums[i] || f==-1)
            {
                t=s;
                s=f;
                f=nums[i];
            }
            else if(s<nums[i] || s==-1)
            {
                t=s;
                s=nums[i];
            }
            else if(t<nums[i] || t==-1)
            {
                    t=nums[i];
            }
            
        }
        //cout<<f<<s<<t;
        if(f==-1 || t==-1)
        {
            return f;
        }
        return t;
    }
};
