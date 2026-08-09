class Solution {
public:
    int dp[101][101];
    int paths(int m, int n)
    {
        if(m==0 && n==0)
        {
            return 1;
        }
        if(m<0 || n<0)
        {
            return 0;
        }
        if(dp[m][n]!=-1)
        {
            return dp[m][n]; 
        }
        int left = paths(m-1,n);
        int upward = paths(m,n-1);
        return dp[m][n] = left+upward;
    }

    int uniquePaths(int m, int n) 
    {
        memset(dp,-1,sizeof(dp));
        return paths(m-1,n-1);
    }
};