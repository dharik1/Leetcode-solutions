class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
         if(matrix.empty())
        {
            return {};
        }
        vector<int> m;
        int cs=0,rs=0;
        int ce=matrix[0].size()-1;
        int re=matrix.size()-1;
       
        while(rs<=re && cs<=ce)//cs=columnstart,ce=columnend same as rs ,re
        {
            for(int i=cs;i<=ce;i++)
            {
                m.push_back(matrix[rs][i]);
            }
            rs++;
            for(int i=rs;i<=re;i++)
            {
                m.push_back(matrix[i][ce]);
            }
            ce--;
            for(int i=ce;i>=cs;i--)
            {
                if(rs<=re)
                {
                    m.push_back(matrix[re][i]);
                }
                
            }
            re--;
            for(int i=re;i>=rs;i--)
            {
                if(cs<=ce)
                {
                     m.push_back(matrix[i][cs]);
                }
               
            }
            cs++;
        }
        return m;
    }
};
