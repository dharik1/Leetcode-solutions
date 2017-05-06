class Solution {
public:
    int maxArea(vector<int>& height) {
        int mh,cb=0,l,r;
        l=0;
        r=height.size()-1;
        while(l<r)
        {
            mh=min(height[r],height[l]);
            cb=max(cb,(r-l)*mh);
            while(l<r && mh>=height[l])
            {
                l++;
            }
             while(l<r && mh>=height[r])
            {
                r--;
            }
        }
        return cb;
    }
};
