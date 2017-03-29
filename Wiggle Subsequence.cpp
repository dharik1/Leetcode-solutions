class Solution {
public:
    int wiggleMaxLength(vector<int>& a) {
        if(a.size()<2) return a.size();
        int start=1;
        while(start<a.size() && a[start]==a[start-1])
        {
            start++;
        }
        if(start==a.size())
        {
            return 1;
        }
        bool flag=a[start]>a[0];
        int p=a[0],length=1;
        for(int i=start;i<a.size();i++)
        {
            if((flag && p<a[i]) || (!flag && p>a[i]))
            {
                flag=!flag;
                length++;
            }
            p=a[i];
        }
        return length;
    }
};
