class Solution {
    public int change(int amount, int[] coins) {
        int n=coins.length;

        int[][] dp=new int[n+1][amount+1];

        for(int i=0; i<=n; i++)
        {
            dp[i][0]=1;
        }

        for(int i=1; i<=n; i++)
        {
            int x=0;
            for(int j=0;j<=amount;j++)
            {
                if(coins[i-1]<=j)
                {
                    x=dp[i][j-coins[i-1]];
                }
                int y=dp[i-1][j];
                dp[i][j]=x+y;
            }
        }
        return dp[n][amount];
    }
}
