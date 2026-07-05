class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) 
    {
        unordered_map<int,int>map;
        for(int i = 0; i<nums.size(); i++)
        {map[nums[i]]++;
        }
        int mid = nums.size()/2;
        if(map[nums[mid]]==1)
        {
            return true;
        }
        return false;
    }
};