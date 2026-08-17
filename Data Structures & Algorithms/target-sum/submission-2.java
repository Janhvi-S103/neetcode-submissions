class Solution {
    public int findTargetSumWays(int[] nums, int target) {
        int n=nums.length;
        int sum=0; 
        for(int x: nums)
        {
            sum+=x;
        }

        if(Math.abs(target)> sum)
            return 0;
        if((sum+target) %2 !=0)
        {
            return 0;
        }
        
        int req=(target+sum)/2;
        int[][] dp= new int[n+1][req+1];

        dp[0][0]=1;

        for(int i=1; i<=n; i++)
        {
            int x=0;
            for(int j=0; j<=req; j++)
            {
                if(nums[i-1] <=j)
                    x=dp[i-1][j-nums[i-1]];
                int y= dp[i-1][j];
                dp[i][j]= x+y;
            }
        }
        return dp[n][req];
    }
}
