class Solution {
public:
    int dp[1001];
    int climb(vector<int>&cost,int n)
    {
        if(n<=1)
        {
            return 0;
        }
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        int lh = climb(cost,n-1)+cost[n-1];
        int rh = climb(cost,n-2)+cost[n-2];
        return dp[n] = min(lh,rh);
    }
    int minCostClimbingStairs(vector<int>& cost) 
    {
        memset(dp,-1,sizeof(dp));
        int n = cost.size();
        return climb(cost,n);
    }
};