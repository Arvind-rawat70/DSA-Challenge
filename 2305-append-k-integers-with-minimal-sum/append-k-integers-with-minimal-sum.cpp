class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        long long ans = 1LL*k*(k+1)/2;
        int dup = -1;
        for(auto &i : nums) {
            if(i == dup) continue;
            dup = i;
            if(i <= k) {
                ans -= i;
                k++;
                ans += k;
            }
        }
        return ans;
    }
};