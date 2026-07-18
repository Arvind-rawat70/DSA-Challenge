class Solution {
public:
    long long subArrayRanges(vector<int>& nums) 
    {
        long long ans =0;
        for(int i = 0; i<nums.size(); i++)
        {
            long long max_element= nums[i];
            long long min_element= nums[i];
            for(int j = i; j<nums.size();j++)
            {
                max_element = max( max_element,(long long)nums[j]);
                min_element = min( min_element,(long long)nums[j]);
                ans += (max_element-min_element);
            }
        }
        return  ans;
    }
};