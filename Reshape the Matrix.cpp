class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int m=nums.size(),n=nums[0].size();
        int v=m*n;
        if(r*c !=v)
        {
            return nums;
        }
        vector<vector<int>> nn(r,vector<int>(c,0));
        for(int i=0;i<v;i++)
        {
                nn[i/c][i%c]=nums[i/n][i%n];
        }
        return nn;
    }
};
