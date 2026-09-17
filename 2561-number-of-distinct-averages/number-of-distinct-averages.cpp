class Solution {
public:
    int distinctAverages(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());

        vector<float> result;

        int i = 0;
        int j = nums.size() - 1;

        while(i < j)
        {
            float avg = (nums[i] + nums[j]) / 2.0;
            result.push_back(avg);

            i++;
            j--;
        }

        sort(result.begin(), result.end());

        int count = 1;

        for(int i = 0; i < result.size() - 1; i++)
        {
            if(result[i] != result[i + 1])
            {
                count++;
            }
        }

        return count;
    }
};