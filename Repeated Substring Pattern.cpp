class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        vector<int> lps(s.size());
        lp(lps,s);
        int n=lps[s.size()-1];
        cout<<n;
        if((n>0)&&(s.size()%(s.size()-n))==0)
        {
            return 1;
        }
        return 0;
    }
    void lp(vector<int>& lps,string s)
    {
        int l=0;
        int i=1;
        lps[0]=0;
        while(i<s.size())
        {
        if(s[i]==s[l])
        {
            l++;
            lps[i]=l;
            i++;
        }
        else{
            if(l!=0)
            {
             l=lps[l-1];   
            }
            else{
                lps[i]=0;
                i++;
            }
        }
      }
    }
};
