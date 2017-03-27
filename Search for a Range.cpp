class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        //vector<int> ans(2,-1);
       int l=0,r=nums.size();
       while(l<r)
       {
           int mid=(l+r)/2;
           if(nums[mid]>=target)
           {
               r=mid;
           }
           else{
               l=mid+1;
           }
       }
          int lf=l; 
          l=0,r=nums.size();
            while(l<r)
          {
           int mid=(l+r)/2;
           if(nums[mid]>target)
           {
               r=mid;
           }
           else{
               l=mid+1;
           }
       }
       int rf=l;
        return (lf==rf)?vector<int> {-1,-1}:vector<int> {lf,rf-1};
    }
};
