class Solution {
public:
    int dp[101];
    int robb(vector<int>&nums,int i)
    {
        if(i>=nums.size())
        {
            return 0;
        }
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        int steal = nums[i]+robb(nums,i-2);
        int skip = robb(nums,i-1);
        return dp[i] = max(steal,skip);
    }

    int rob(vector<int>& nums) 
    {
        memset(dp,-1,sizeof(dp));
        int i = nums.size()-1;
        return robb(nums,i);
    }
};