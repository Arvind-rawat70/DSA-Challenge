class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        vector<int> hash(256, -1);

        int l = 0;
        int r = 0;
        int max_length = 0;

        while (r < s.length()) {

            if (hash[s[r]] != -1 && hash[s[r]] >= l) {
                l = hash[s[r]] + 1;
            }

            hash[s[r]] = r;

            max_length = max(max_length, r - l + 1);

            r++;
        }

        return max_length;
    }
};