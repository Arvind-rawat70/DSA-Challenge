class Solution {
public:
    int jump(vector<int>& nums) 
    {
        int jumps = 0;
        int max_jump = 0;
        int count = 0;
        for(int i = 0;i<nums.size()-1; i++)
        {
            max_jump = max(max_jump,nums[i]+i);
            if(jumps == i)
            {
                count++;
                jumps = max_jump;
            }
        }
        return count;
    }
};