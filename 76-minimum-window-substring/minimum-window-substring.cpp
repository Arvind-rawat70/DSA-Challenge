class Solution {
public:
    string minWindow(string s, string t) {
        int m = s.size();
        int n = t.size();
        if (n == 0 || m == 0 || n > m) return "";

        unordered_map<char, int> hash;
        for (int i = 0; i < n; i++) {
            hash[t[i]]++;
        }

        int count = 0;
        int min_len = INT_MAX;
        int index = -1;
        int l = 0;

        for (int r = 0; r < m; r++) {
            if (hash[s[r]] > 0) count++;
            hash[s[r]]--;

            while (count == n) {
                if (r - l + 1 < min_len) {
                    min_len = r - l + 1;
                    index = l;
                }
                hash[s[l]]++;
                if (hash[s[l]] > 0) count--;
                l++;
            }
        }

        return index == -1 ? "" : s.substr(index, min_len);
    }
};