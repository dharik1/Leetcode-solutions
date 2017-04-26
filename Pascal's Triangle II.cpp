class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> v(rowIndex+1,1);
        long cnt=1;
        int j=1;
        for(int i=rowIndex;i>=(rowIndex/2);i--)
        {
            cnt*=i;
            cnt/=j;
            j++;
            v[i-1]=(int)cnt;
            v[j-1]=(int)cnt;
        }
        return v;
    }
};
