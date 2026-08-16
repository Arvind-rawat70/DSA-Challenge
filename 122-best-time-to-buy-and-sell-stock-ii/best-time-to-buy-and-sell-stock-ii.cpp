class Solution {
public:

    int dp[30001][2];

    int profit(vector<int>& prices, int i, int buy)
    {
        if(i == prices.size())
        {
            return 0;
        }

        // Already calculated
        if(dp[i][buy] != -1)
        {
            return dp[i][buy];
        }

        if(buy)
        {
            // Buy
            int buy_stock =
                -prices[i] + profit(prices, i+1, 0);

            // Don't buy
            int dont_buy =
                profit(prices, i+1, 1);

            return dp[i][buy] = max(buy_stock, dont_buy);
        }
        else
        {
            // Sell
            int sell =
                prices[i] + profit(prices, i+1, 1);

            // Don't sell
            int dont_sell =
                profit(prices, i+1, 0);

            return dp[i][buy] = max(sell, dont_sell);
        }
    }

    int maxProfit(vector<int>& prices)
    {
        memset(dp, -1, sizeof(dp));

        return profit(prices, 0, 1);
    }
};