class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows<2)
        {
            return s;
        }
        int row=0;
        string *ss=new string[numRows];
        int step=1;
        for(int i=0;i<s.size();i++)
        {
            ss[row].push_back(s[i]);
            if(row==0)
            {
                step=1;
            }
            else if(row == numRows-1)
            {
                step=-1;
            }
            row+=step;
        }
        s.clear();
        for(int i=0;i<numRows;i++)
        {
            s.append(ss[i]);
        }
        return s;
    }
};
