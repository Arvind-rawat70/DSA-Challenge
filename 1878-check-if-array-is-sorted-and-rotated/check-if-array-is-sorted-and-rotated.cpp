class Solution {
public:
    bool check(vector<int>& nums) 
    {
        int count = 0;
        int d =  nums.size();
        for(int i = 0; i<nums.size();i++)
        {
            if(nums[i]>nums[(i+1)%d])
            {
                count++;
            }
            if(count>1)
            {
                return false;
            }
        }
        return true;
    }
};