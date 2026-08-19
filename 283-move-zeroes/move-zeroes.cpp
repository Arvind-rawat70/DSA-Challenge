class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int index = -1;

        // Find first zero
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                index = i;
                break;
            }
        }
        if(index==-1)
        {
            return ;
        }

        int i = index;
        int j = index + 1;

        while (j < nums.size())
        {
            if (nums[j] != 0)
            {
                swap(nums[i], nums[j]);
                i++;
            }

            j++;
        }
    }
};