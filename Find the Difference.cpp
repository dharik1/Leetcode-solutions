class Solution {
public:
    char findTheDifference(string s, string t) {
        int c[26]={0};
        for(int i=0;s[i];i++)
        {
            c[s[i]-'a']+=1;
        }
        for(int i=0;t[i];i++)
        {
            c[t[i]-'a']-=1;
        }
        for(int i=0;i<26;i++)
        {
            if(c[i]!=0)
            {
                return i+'a';
            }
           // cout<<c[i]<<" ";
        }
       // return 'a';
    }
};
