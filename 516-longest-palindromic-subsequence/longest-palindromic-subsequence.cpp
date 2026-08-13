class Solution {
public:
    int dp[1001][1001];

    int sq(string &s, int i, int n)
    {
        if(i > n)
            return 0;

        if(i == n)
            return 1;

        if(dp[i][n] != -1)
            return dp[i][n];

        if(s[i] == s[n])
        {
            return dp[i][n] = 2 + sq(s, i + 1, n - 1);
        }

        int left = sq(s, i + 1, n);
        int right = sq(s, i, n - 1);

        return dp[i][n] = max(left, right);
    }

    int longestPalindromeSubseq(string s)
    {
        memset(dp, -1, sizeof(dp));

        int n = s.length() - 1;

        return sq(s, 0, n);
    }
};