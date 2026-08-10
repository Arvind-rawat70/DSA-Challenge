class Solution {
public:
   int path(vector<vector<int>>&grid, vector<vector<int>>&dp, int n, int m)
   {
    if(n==0 && m ==0)
    {
        return grid[0][0];
    }
    if(n<0 || m<0)
    {
        return INT_MAX;
    }
    if(dp[n][m]!=-1)
    {
        return dp[n][m];
    }
    int left = path(grid,dp,n-1,m);
    int right = path(grid,dp,n,m-1);
    return dp[n][m]= grid[n][m]+min(left,right);
   }

    int minPathSum(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return path(grid,dp,n-1,m-1);        
    }
};