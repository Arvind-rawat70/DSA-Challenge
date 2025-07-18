class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        unordered_map<int,int>map;
        for(int i = 0;i<nums.size();i++)
        {
            map[nums[i]]++;
        }
        int k = nums.size()/2;
        int count = 0;
        for(auto &it : map)
        {
            if(it.second>k)
            {
                count = it.first;
            }
        }
        return count;
        
    }
};