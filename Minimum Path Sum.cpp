class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        //vector<vector<int>> mp(n,vector<int>(m,grid[0][0]));
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(i==0 && j==0)
                {
                    grid[i][j]=grid[0][0];
                }
                else if(i==0 && j!=0)
                {
                    grid[0][j]=grid[0][j-1]+grid[i][j];
                }
                else if(j==0 && i!=0)
                {
                    grid[i][0]=grid[i-1][0]+grid[i][j];
                }
                else{
                    grid[i][j]=min(grid[i-1][j],grid[i][j-1])+grid[i][j];
                }
            }
        }
        return grid[n-1][m-1];
    }
};
