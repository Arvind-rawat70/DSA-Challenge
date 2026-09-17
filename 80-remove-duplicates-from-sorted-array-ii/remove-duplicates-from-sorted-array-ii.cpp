class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        map<int, int> mp;

        for(int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }

        vector<int> result;

        for(auto it : mp)
        {
            int count = min(it.second, 2);

            for(int i = 0; i < count; i++)
            {
                result.push_back(it.first);
            }
        }

        // Put result back into nums
        for(int i = 0; i < result.size(); i++)
        {
            nums[i] = result[i];
        }

        return result.size();
    }
};