class Solution {
public:
    bool isAnagram(string s, string t) {
        int a[26]={0};
        for(int i=0;s[i];i++)
        {
            a[s[i]-'a']++;
        }
         for(int i=0;t[i];i++)
        {
            a[t[i]-'a']--;
        }
         for(int i=0;i<26;i++)
        {
            if(a[i]!=0) return 0;
        }
        return 1;
    }
};
