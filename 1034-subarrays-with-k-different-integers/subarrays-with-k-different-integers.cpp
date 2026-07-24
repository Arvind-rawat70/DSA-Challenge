class Solution {
public:
   int ar_l(vector<int>&nums, int k)
   {
    unordered_map<int,int>map;
    int l = 0;
    int count = 0;
    int r = 0;
    while(r<nums.size()){
        map[nums[r]]++;
        while(map.size()>k)
        {
          map[nums[l]]--;
          if(map[nums[l]]==0)
          {
            map.erase(nums[l]);
          }
          l++;
        }
        count += (r-l+1);
        r++;
    }
    return count;
   }
    int subarraysWithKDistinct(vector<int>& nums, int k) 
    {
        return ar_l(nums,k)-ar_l(nums,k-1);
    }
};