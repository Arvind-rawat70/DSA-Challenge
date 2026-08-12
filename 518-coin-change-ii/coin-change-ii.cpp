class Solution {
public:
   int dp[301][5001];
    int extra(int amount, vector<int>& coins,int n)
    {
        if(n<0)
        {
            return amount==0;
        }
        if(dp[n][amount]!=-1)
        {
            return dp[n][amount];
        }
        int not_take  = extra(amount,coins,n-1);
        int take = false;
        if(coins[n]<=amount)
        {
            take = extra(amount-coins[n],coins,n);
        }
        return  dp[n][amount] = take+not_take;
    }

    int change(int amount, vector<int>& coins) 
    {
        memset(dp,-1,sizeof(dp));
        int n = coins.size()-1;
        return extra(amount,coins,n);
    }
};