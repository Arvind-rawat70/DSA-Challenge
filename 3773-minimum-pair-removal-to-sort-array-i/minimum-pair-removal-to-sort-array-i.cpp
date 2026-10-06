class Solution {
public:
    int min_index(vector<int>&nums)
    {
        int sum = INT_MAX;
        int j = 0;
        for(int i  = 0; i<nums.size()-1; i++)
        {
            if(nums[i]+nums[i+1]<sum)
            {
                sum = nums[i]+nums[i+1];
                j = i;
            }
        }
        return j;
    }
    
    int minimumPairRemoval(vector<int>& nums) 
    {
        int count = 0;
        while(!is_sorted(nums.begin(), nums.end()))
        {
            int index = min_index(nums);
            nums[index] =  nums[index]+nums[index+1];
            nums.erase(begin(nums)+index+1);
            count++;
        }
        return count;
    }
};