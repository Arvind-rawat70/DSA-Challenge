class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>map;
        vector<int>count;
        for(int i =0;i<nums.size();i++)
        {
            map[nums[i]]++;
        }
        int condition = (nums.size()/3);

        for(auto& it:map)
        {
            if(it.second>condition)
            {
                count.push_back(it.first);
            }
        }
        return count;
    }
};