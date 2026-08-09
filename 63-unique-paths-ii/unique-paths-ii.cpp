class Solution {
public:
    int paths(vector<vector<int>>& obstacleGrid,  vector<vector<int>>&dp,int n, int m)
    {
        if(n<0 || m<0)
        {
            return 0;
        }
        if( obstacleGrid[n][m]==1)
        {
            return 0;
        }
        if(n == 0 && m == 0)
        {
            return 1;
        }
        if(dp[n][m]!=-1)
        {
            return dp[n][m];
        }
        int left = paths(obstacleGrid,dp,n-1,m);
        int right = paths(obstacleGrid,dp,n,m-1);
        return dp[n][m] = left+right;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) 
    {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return paths(obstacleGrid,dp,n-1,m-1);
    }
};