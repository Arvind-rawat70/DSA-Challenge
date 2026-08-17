class Solution {
public:
    int dp[5001][2];

    int profit(vector<int>&prices,int i, int j)
    {
        if(i>=prices.size())
        {
            return 0;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        if(j)
        {
            int buy = -prices[i]+profit(prices,i+1,0);
            int skip = profit(prices,i+1,1);
            return dp[i][j] = max(buy,skip);
        }
        else{
            int sell = prices[i]+profit(prices,i+2,1);
            int skip = profit(prices,i+1,0);
            return dp[i][j] = max(sell,skip);
        }
        
    }
    int maxProfit(vector<int>& prices) 
    {
        memset(dp,-1,sizeof(dp));
        return profit(prices,0,1);
    }
};