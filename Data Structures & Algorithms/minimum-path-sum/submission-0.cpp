class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int r=grid.size(), c= grid[0].size();
        vector<vector<int>>dp(r+1,vector<int>(c+1,INT_MAX));
        dp[r-1][c]=0;

        for(int i=r-1;i>=0;i--)
        {
            for(int j=c-1;j>=0;j--)
            {
                dp[i][j]=grid[i][j]+ min(dp[i+1][j], dp[i][j+1]);
            }
        }
        return dp[0][0];
    }
};