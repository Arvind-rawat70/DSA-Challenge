class Solution {
public:
   int dp[13][10001];
   int change(vector<int>&coin, int n,int amount)
   {
    if(amount==0)
    {
        return 0;
    }
    if(n<0)
    {
        return INT_MAX;
    }
    if(dp[n][amount]!=-1)
    {
        return dp[n][amount];
    }
    int not_pick = change(coin,n-1,amount);
    int pick = INT_MAX;
    if(coin[n]<=amount)
    {
        int ans = change(coin,n,amount-coin[n]);

        if(ans!=INT_MAX)
        {
            pick = 1+ans;
        }
    }
    return  dp[n][amount]= min(pick,not_pick);
   }

    int coinChange(vector<int>& coins, int amount) 
    {
        memset(dp,-1,sizeof(dp));
        int n = coins.size()-1;
        int ans =  change(coins,n,amount);
        return ans == INT_MAX ? -1 : ans;
    }
};