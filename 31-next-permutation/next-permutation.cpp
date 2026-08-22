class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    {
        int n = nums.size() - 1;
        int i = n - 1;
        int pivot = -1;

        while(i >= 0)
        {
            if(nums[i] < nums[i + 1])
            {
                pivot = i;
                break;
            }
            i--;
        }

        if(pivot != -1)
        {
            for(int i = n; i > pivot; i--)
            {
                if(nums[i] > nums[pivot])
                {
                    swap(nums[i], nums[pivot]);
                    break;
                }
            }
        }
        reverse(nums.begin() + pivot + 1, nums.end());
    }
};