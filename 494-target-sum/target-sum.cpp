class Solution {
public:
    int dp[21][2001];
    int find(vector<int>& nums, int target,int n,int count)
    {
        if(n<0)
        {
            return count==target;
        }
        if(dp[n][count+1000]!=-1)
        {
            return dp[n][count+1000];
        }
        int add = find(nums,target,n-1,count+nums[n]);
        int sub = find(nums,target,n-1,count-nums[n]);
        return dp[n][count+1000] = add+sub;
    }


    int findTargetSumWays(vector<int>& nums, int target) 
    {
        memset(dp,-1,sizeof(dp));
        int n = nums.size()-1;
        return find(nums,target,n,0);
    }
};