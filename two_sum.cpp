class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int,int>map;
        for(int i = 0; i<nums.size(); i++)
        {
            int sum = nums[i];
            if(map.find(target-sum)!= map.end())
            {
                return {i,map[target-sum]};
            }
            map[sum] = i;
        }
        return {};
        
    }
};