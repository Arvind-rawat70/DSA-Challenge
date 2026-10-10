class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        unordered_map<int,int>map;
        for(int i = 0; i<nums.size(); i++)
        {
            map[nums[i]]++;
        }
        int val = 0;
        int n = nums.size();
        for(auto it:map)
        {
            if(it.second>n/2)
            {
                val = it.first;
            }
        }
        return val;
        
    }
};