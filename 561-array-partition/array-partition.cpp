class Solution {
public:
    int arrayPairSum(vector<int>& nums) 
    {
        int ans = 0;
        sort(nums.begin(), nums.end());
        int j = 0;
        int i = 0;
        while(i<nums.size())
        {
            j = i+1;
            ans += min(nums[i], nums[j]);
            i = i+2;
        }
        return ans;
    }
};