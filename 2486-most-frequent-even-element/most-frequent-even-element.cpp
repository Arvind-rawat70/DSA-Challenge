class Solution {
public:
    int mostFrequentEven(vector<int>& nums) 
    {
        int ans = -1;
        int result = INT_MAX;

        unordered_map<int,int> map;

        for(int i = 0; i < nums.size(); i++)
        {
            map[nums[i]]++;
        }

        int freq = 0;

        for(auto it : map)
        {
            if(it.first % 2 == 0 &&(it.second > freq ||(it.second == freq && it.first < result)))
            {
                freq = it.second;
                result = it.first;
                ans = it.first;
            }
        }

        return ans;
    }
};