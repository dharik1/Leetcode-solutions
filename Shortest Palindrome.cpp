class Solution {
public:
    string shortestPalindrome(string s) {
        string t=s;
        reverse(t.begin(),t.end());
        string ss=s+'#'+t;
        int i=1,l=0;
        vector<int> kp(ss.size(),0);
        //cout<<ss<<" ";
        while(i<ss.size())
        {
            if(ss[i]==ss[l])
            {
                l++;
                kp[i]=l;
                i++;
            }
            else{
                if(l!=0)
                {
                    l=kp[l-1];
                }
                else{
                    kp[i]=0;
                    i++;
                }
            }
        }
        int p=s.size()-kp[ss.size()-1];
        string y="";
        for(int j=0;j<p;j++)
        {
            y+=t[j];
            //p--;
        }
        y+=s;
       /* for(int i=0;i<ss.size();i++)
        {
            cout<<kp[i]<<" ";
        }*/
        return y;
    }
};
