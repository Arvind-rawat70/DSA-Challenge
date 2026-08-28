class Solution {
public:
    int findPeakElement(vector<int>& nums) 
    {
       int peak = 0;
       int n = nums.size();
       if(n==1)
       {
        return peak;
       }
       bool status = false;
       for(int i = 0; i<nums.size()-1; i++)
       {
        int j = i+1;
        if(nums[i]>nums[j])
        {
            peak = i;
            status = true;
            break;
        }
       }
       if(status == false)
       {
        return n-1;
       }
       return peak;
    }
};