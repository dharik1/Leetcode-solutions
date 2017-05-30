class Solution {
public:
    bool isMatch(string s, string p) {
        int pp=0,ss=0,st=-1,m=0;
        while(ss<s.size())
        {
            if(pp<p.size() && (s[ss]==p[pp] || p[pp]=='?'))
            {
                ss++;
                pp++;
            }
            else if(p[pp]=='*' && pp<p.size())
            {
                st=pp;
                m=ss;
                pp++;
            }
            else if(st!=-1)
            {
                pp=st+1;
                m++;
                ss=m;
            }
            else{
                return 0;
            }
        }
        while(pp<p.size() && p[pp]=='*')
        {
            pp++;
        }
        return pp==p.size();
    }
};
