class Solution {
public:
    int dp[201][10001];

    bool partion(vector<int>& nums, int target, int n)
    {
        // Target achieved
        if(target == 0)
            return true;

        // No elements left
        if(n < 0)
            return false;

        // Already calculated
        if(dp[n][target] != -1)
            return dp[n][target];

        // Don't take nums[n]
        bool left = partion(nums, target, n - 1);

        // Take nums[n]
        bool right = false;

        if(target >= nums[n])
        {
            right = partion(nums, target - nums[n], n - 1);
        }

        return dp[n][target] = left || right;
    }

    bool canPartition(vector<int>& nums)
    {
        memset(dp, -1, sizeof(dp));

        int total_target = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            total_target += nums[i];
        }

        // Odd total cannot be divided equally
        if(total_target % 2 != 0)
            return false;

        int target = total_target / 2;

        return partion(nums, target, nums.size() - 1);
    }
};