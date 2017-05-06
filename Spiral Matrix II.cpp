class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> v(n,vector<int>(n));
        if(n==0)
        {
            return v;
        }
        int num=1;
        int rs=0,cs=0;
        int re=n-1;
        int ce=n-1;
        while(rs<=re && cs<=ce)
        {
          for(int i=cs;i<=ce;i++)
          {
              v[rs][i]=num++;
              
          }
          rs++;
          for(int i=rs;i<=re;i++)
          {
              v[i][ce]=num++;
          }
          ce--;
          for(int i=ce;i>=cs;i--)
          {
              if(re>=rs)
              {
              v[re][i]=num++;
              }
          }
          re--;
          for(int i=re;i>=rs;i--)
          {
              if(cs<=ce)
              {
              v[i][cs]=num++;
              }
          }
          cs++;
        }
        return v;
    }
};
