class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt=0,cnt1=0,c=0,c1=1;
        int n=nums.size();
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==c)
            {
                cnt++;
            }
            else if(nums[i]==c1){
                cnt1++;
            }
            else if(cnt<=0)
            {
                cnt=1;
                c=nums[i];
            }
            else if(cnt1<=0)
            {
                cnt1=1;
                c1=nums[i];
            }
            else{
                cnt--;
                cnt1--;
            }
        }
        cnt=cnt1=0;
       for(int i=0;i<n;i++)
        {
           if(nums[i]==c)
           {
               cnt++;
           }
           else if(nums[i]==c1)
           {
               cnt1++;
           }
        }
        if(cnt>(n/3))
        {
            v.push_back(c);
        }
        if(cnt1>(n/3))
        {
            v.push_back(c1);
        }
        return v;
    }
};
