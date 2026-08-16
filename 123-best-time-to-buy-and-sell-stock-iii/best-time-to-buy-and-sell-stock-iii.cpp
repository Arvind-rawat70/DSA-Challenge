class Solution {
public:
    int dp[100001][2][5];

    int profit(vector<int>& prices, int i, int j, int k)
    {
        if(i>=prices.size()||k==0)
        {
            return 0;
        }
        if(dp[i][j][k]!=-1)
        {
            return dp[i][j][k];
        }
        if(j)
        {
            int buy = -prices[i]+profit(prices,i+1,0,k-1);
            int skip = profit(prices,i+1,1,k);
            return dp[i][j][k] = max(buy,skip);
        }
        else{
            int sell = prices[i]+profit(prices,i+1,1,k-1);
            int skip = profit(prices,i+1,0,k);
            return dp[i][j][k] = max(sell,skip);
        }

    } 

    int maxProfit(vector<int>& prices) 
    {
        memset(dp,-1,sizeof(dp));
        return profit(prices,0,1,4);
    }
};