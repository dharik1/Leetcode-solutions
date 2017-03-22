class Solution {
public:
    int findPoisonedDuration(vector<int>& ts, int duration) {
       if(ts.size()==0 || duration==0)
       {
           return 0;
       }
       int st=ts[0],end=ts[0]+duration,att=0;
       for(int i=1;i<ts.size();i++)
        {
            if(ts[i]>end)
            {
                att+=end-st;
                st=ts[i];
            }
            end=ts[i]+duration;
        }
        att+=end-st;
        return att;
    }
};
