class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int dp[amount+1];
        memset(dp,9999,sizeof(dp));
        dp[0]=0;
        for(int i=1;i<=amount;i++)
        {
            for(int j=0;j<coins.size();j++)
            {
                if(coins[j]<=i)
                {
              //      cout<<dp[i]<<" "<<dp[i-coins[j]]<<endl;
                //    cout<<i;
                    dp[i]=min(dp[i],(dp[i-coins[j]] + 1));
                }
            }
        }
     /*  for(int i=0;i<=amount;i++)
        {
           cout<<dp[i]<<" ";
        }*/
        return dp[amount]>amount ? -1 : dp[amount];
    }
};
