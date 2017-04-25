class Solution {
public:
    vector<int> plusOne(vector<int>& nums) {
        bool flag=true;
        vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=9)
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            v.push_back(1);
            for(int i=1;i<nums.size()+1;i++)
            {
                v.push_back(0);
            }
        }
        else{
            int carry=1;
            for(int i=nums.size()-1;i>=0;i--)
            {
                carry+=nums[i];
                v.push_back(carry%10);
                carry/=10;
            }
            reverse(v.begin(),v.end());
        }
        
        return v;
    }
};
