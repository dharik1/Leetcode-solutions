class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool isfr=false,isfc=false;
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    if(i==0)
                    {
                     isfr=true;   
                    }
                    if(j==0)
                    {
                     isfc=true;   
                    }
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(int i=1;i<matrix.size();i++)
        {
            for(int j=1;j<matrix[0].size();j++)
            {
            if(matrix[i][0]==0 || matrix[0][j]==0)
            {
                matrix[i][j]=0;
            }
            }
        }
        if(isfr)
        {
        for(int i=0;i<matrix[0].size();i++)
        {
            matrix[0][i]=0;
        }
        }
        if(isfc)
        {
        for(int i=0;i<matrix.size();i++)
        {
            matrix[i][0]=0;
        }
        }
    }
};
