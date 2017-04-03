class Solution {
public:
    void reverseWords(string &s) {
        
        int i=0;
        int j=0;
        int l;
        int c=0;
        while(true)
        {
        while(s[i]==' ' && i<s.size())
        {
            i++;
        }
        if(i==s.size())
        {
           /* if(j==0)
            {
                s.resize(j);
            }*/
            break;
        }
        if(c)
        {
            s[j]=' ';
            j++;
        }
        l=j;
        while(s[i]!=' ' && i<s.size())
        {
            s[j]=s[i];
            i++;
            j++;
        }
     rev(s,l,j-1); 
     c++;
    }
    s.resize(j);
    rev(s,0,s.size()-1);
    }
    int rev(string &s,int i,int j)
    {
        while(i<j)
        {
        char t=s[i];
        s[i]=s[j];
        s[j]=t;
        i++;
        j--;
    }
    return 0;
    }
};
