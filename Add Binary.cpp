class Solution {
public:
    string addBinary(string a, string b) {
        int sum=0;
        int i=a.size()-1;
        int j=b.size()-1;
        string s="";
        while(i>=0 | j>=0 || sum==1)
        {
            sum+=(i>=0)?a[i--]-'0':0;
            sum+=(j>=0)?b[j--]-'0':0;
            s=char(sum%2+'0')+s;
            sum/=2;
        }
        return s;
    }
};
