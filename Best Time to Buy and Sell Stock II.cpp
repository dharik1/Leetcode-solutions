class Solution {
public:
    int maxProfit(vector<int>& p) {
        if(p.size()<2)
        {
            return 0;
        }
        int mx=0;
        for(int i=0;i<p.size()-1;i++)
        {
                mx+=max(p[i+1]-p[i],0);
        }
        return mx;
    }
};
