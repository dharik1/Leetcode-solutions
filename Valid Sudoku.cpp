class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b) {
        bool r[9][9],c[9][9],s[3][3][9];
        memset(r,false,sizeof(r));
        memset(c,false,sizeof(c));
        memset(s,false,sizeof(s));
        int n;
        for(int i=0;i<b.size();i++)
        {
            for(int j=0;j<b[0].size();j++)
            {
                if(b[i][j]>'0' && b[i][j]<='9')
                {
                    n=b[i][j]-'1';
                    if(r[i][n]) return false;
                    r[i][n]=true;
                    if(c[j][n]) return false;
                    c[j][n]=true;
                    if(s[i/3][j/3][n]) return false;
                    s[i/3][j/3][n]=true;
                }
            }
        }
        return true;
    }
};
