class Solution {
public:
    int longestOnes(vector<int>& nums, int k) 
    {
        int count = 0;
        int max_len = 0;
        int len = 0;
        int l = 0;
        int r = 0;
        while(r<nums.size())
        {
            if(nums[r]==0)
            {
                count++;
            }
            while(count>k)
            {
                if(nums[l]==0) count--;
                l++;
            }
         len = r-l+1;
         max_len = max(max_len,len);
         r++;
        }
        return max_len;
    }
};