class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int dp[amount+1]={0};
        dp[0]=1;
        int n=coins.size();
        for(int i=0;i<n;i++)
        {
            for(int j=coins[i];j<=amount;j++)
            {
                dp[j]=dp[j]+dp[j-coins[i]];//excluding ith coin from the jth amount
            }
        }
        /*for(int i=0;i<=amount;i++)
        {
            cout<<dp[i]<<" ";
        }*/
        return dp[amount];
    }
};
