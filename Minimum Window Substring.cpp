class Solution {
public:
    string minWindow(string s, string t) {
     vector<int> mp(256,0);
     int cnt=t.size(),st=0,ed=0,d=INT_MAX,h=0;
     for(auto i:t)
     {
         mp[i]++;
     }
     while(ed<s.size())
     {
         if(mp[s[ed++]]-->0)
         {
             cnt--;
         }
         while(cnt==0)
         {
             if(ed-st<d)
             {
                 d=ed-st;
                 h=st;
             }
             if(mp[s[st++]]++==0)
             {
                 cnt++;
             }
         }
     }
     return d==INT_MAX?"":s.substr(h,d);
    }
};
