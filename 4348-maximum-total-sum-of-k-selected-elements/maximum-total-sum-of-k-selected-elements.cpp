class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) 
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        long long sum = 0;
        for(int i=n-1; k>0; i--)
        {
            if(mul>0)
            {
              sum +=(long long)nums[i]*mul;
            }
            else{
                sum +=nums[i];
            }
            mul--;
            k--;
        }
        return sum;
    }
};