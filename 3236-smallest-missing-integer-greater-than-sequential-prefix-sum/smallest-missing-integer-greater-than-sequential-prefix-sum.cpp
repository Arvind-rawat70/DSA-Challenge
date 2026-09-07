class Solution {
public:
    int missingInteger(vector<int>& nums) 
    {
        int index = 1;

        for(int i = 0; i < nums.size() - 1; i++)
        {
            if(nums[i+1] - nums[i] == 1)
            {
                index++;
            }
            else
            {
                break;
            }
        }

        int sum = 0;

        for(int i = 0; i < index; i++)
        {
            sum += nums[i];
        }

        bool found = true;

        while(found)
        {
            found = false;

            for(int i = 0; i < nums.size(); i++)
            {
                if(nums[i] == sum)
                {
                    sum++;
                    found = true;
                    break;
                }
            }
        }

        return sum;
    }
};