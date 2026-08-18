class Solution {
    public int coinChange(int[] coins, int amount) {
        int n=coins.length;
        int INF=amount+1;
        int[][] dp= new int[n+1][amount+1];

        for(int i=0; i <=amount; i++)
        {
            dp[0][i]=INF;
        }
        for(int i=1; i <=n; i++)
        {
            dp[i][0]=0;
        }

        for(int i=1; i <=n; i++)
        {
            int x=INF;
            for(int j=1; j<=amount;j++)
            {
                if(coins[i-1]<=j)
                {

                    x=1+dp[i][j-coins[i-1]];
                }
                int y= dp[i-1][j];
                dp[i][j]= Math.min(x,y);
            }
        }
        return dp[n][amount]==INF? -1: dp[n][amount];
    }
}
