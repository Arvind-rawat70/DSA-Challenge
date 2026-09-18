class Solution {
public:
    int mostFrequentEven(vector<int>& nums) 
    {
        vector<int>result;
        for(int i = 0; i<nums.size(); i++)
        {
            if(nums[i]%2==0)
            {
                result.push_back(nums[i]);
            }
        }
        unordered_map<int,int>map;
        for(int i = 0; i<result.size(); i++)
        {
            map[result[i]]++;
        }
        int max_freq = 0;
        int res = -1;
        for(auto it :map)
        {
            int num = it.first;
            int freq = it.second;
            if(freq>max_freq)
            {
                max_freq = freq;
                res = it.first;
            }
            else if(max_freq == freq && num<res)
            {
                res = num;
            }
        }
        return res;
    }
};