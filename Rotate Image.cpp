class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int nn=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<nn;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<nn/2;j++)
            {
                swap(matrix[i][j],matrix[i][nn-1-j]);
            }
        }
    }
};
