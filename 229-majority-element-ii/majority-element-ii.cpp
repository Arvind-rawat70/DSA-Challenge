class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        vector<int>result;
        unordered_map<int, int>map;
        for(int i = 0;i<nums.size(); i++)
        {
            map[nums[i]]++;
        }
        int n = nums.size();
        for(auto it: map)
        {
            if(it.second>n/3)
            {
                result.push_back(it.first);
            }
        }
        return result;
    }
};