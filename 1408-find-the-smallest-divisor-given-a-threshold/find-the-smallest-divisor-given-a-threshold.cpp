class Solution {
public:
    int number(vector<int>& nums, int threshold, int no) 
    {
        int val = 0;
        for(int i = 0; i < nums.size(); i++)
        {
           val += (nums[i] + no - 1) / no;
        }
        return threshold>=val;
    }

    int smallestDivisor(vector<int>& nums, int threshold) 
    {
        int h = *max_element(nums.begin(),nums.end());
        int l = 1;
        int ans = -1;
        while(l<=h)
        {
            int mid = l+(h-l)/2;
            if(number(nums,threshold,mid))
            {
                ans = mid;
                h = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return ans;
    }
};