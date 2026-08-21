class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int min_val = INT_MAX;
        int max_val = 0;
        for(int i = 0; i<prices.size(); i++)
        {
            min_val = min(min_val,prices[i]);
            int val = prices[i]-min_val;
            max_val = max(max_val,val);
        }
        return max_val;
        
    }
};