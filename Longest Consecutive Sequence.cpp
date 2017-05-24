class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> m;
        int mx=0;
        for(int i=0;i<nums.size();i++)
        {
            if(m[nums[i]]==0)
            {
                int l=m[nums[i]-1]>0?m[nums[i]-1]:0;
                int r=m[nums[i]+1]>0?m[nums[i]+1]:0;
                int sum=l+r+1;
                mx=max(mx,sum);
                m[nums[i]]=sum;
                m[nums[i]-l]=sum;
                m[nums[i]+r]=sum;
            }
            else{
                continue;
            }
        }
        /*for(pair<int,int> p: m)
        {
            cout<<p.first<<" "<<p.second<<endl;
            //mx=max(mx,p.second);
        }*/
        return mx;
    }
};
