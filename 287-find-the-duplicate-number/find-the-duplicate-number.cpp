class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        int i = 0;
        int ans = 0;
        int count = 0;
        while(i<nums.size()-1)
        {
            if(nums[i]==nums[i+1])
            {
                count++;
            }
            if(count>0)
            {
                ans = nums[i];
                break;
            }
            i++;

        }
        return ans;
        
    }
};