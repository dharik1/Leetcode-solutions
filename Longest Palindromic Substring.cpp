class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size()<2)
        {
            return s;
        }
        int m=1,start,last;
        for(int i=1;i<s.size();i++)
        {
            int l=i-1;
            int h=i;
            while(l>=0 && h<s.size() && s[l]==s[h])
            {
                if(h-l+1 >m)
                {
                    m=(h-l+1);
                    start=l;
                    last=h;
                }
                l--;
                h++;
            }l=i-1;
            h=i+1;
            while(l>=0 && h<s.size() && s[l]==s[h])
            {
                if(h-l+1 >m)
                {
                    m=(h-l+1);
                    start=l;
                    last=h;
                }
                l--;
                h++;
            }
        }
        string t="";
        if(m==1)
        {
            t+=s[0];
            return t;
        }
        for(int i=start;i<=last;i++)
        {
            t+=s[i];
        }
        return t;
    }
};
