class Solution {
public:
   int at_k(vector<int>&nums, int k)
   {
       int l = 0;
        int r = 0;
        int count = 0;
        int res= 0;
        while(r<nums.size())
        {
            if(nums[r]%2!=0)
            {
                count++;
            }
            while(count>k)
            {
                if(nums[l]%2!=0)
                {
                    count--;
                }
                l++;
            }
           res += (r-l+1);
           r++;
        }
        return res;
   }
    int numberOfSubarrays(vector<int>& nums, int k) 
    {
        return at_k(nums,k)-at_k(nums,k-1);
    }
};