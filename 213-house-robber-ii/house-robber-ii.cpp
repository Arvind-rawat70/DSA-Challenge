class Solution {
public:
    int dp[101];

    int robb(vector<int>& nums, int i, int end) {
        if (i > end) {
            return 0;
        }

        if (dp[i] != -1) {
            return dp[i];
        }

        int take = nums[i] + robb(nums, i + 2, end);
        int skip = robb(nums, i + 1, end);

        return dp[i] = max(take, skip);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();

        if (n == 1) {
            return nums[0];
        }

        if (n == 2) {
            return max(nums[0], nums[1]);
        }

        // Case 1: Take from house 0, so exclude last house
        memset(dp, -1, sizeof(dp));
        int case1 = robb(nums, 0, n - 2);

        // Case 2: Exclude house 0, so consider from house 1
        memset(dp, -1, sizeof(dp));
        int case2 = robb(nums, 1, n - 1);

        return max(case1, case2);
    }
};