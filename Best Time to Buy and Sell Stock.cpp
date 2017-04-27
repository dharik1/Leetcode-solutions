class Solution {
public:
    int maxProfit(vector<int>& p) {
        int buy=0,sell=0;
        for(int i=1;i<p.size();i++)
        {
            //buy=min(buy,p[i]);
            //sell=max(sell,p[i]-buy);
            
            buy=max(0,buy+=p[i]-p[i-1]);
            sell=max(sell,buy);
        }
        //mp=max(0,sell-buy);
        return sell;
    }
};
