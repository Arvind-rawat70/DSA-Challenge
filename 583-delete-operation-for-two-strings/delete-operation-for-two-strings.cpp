class Solution {
public:
    int dp[501][501];

    int distance(string &word1, string &word2, int n, int m)
    {
        if(n >= word1.length() || m >= word2.length())
        {
            return 0;
        }

        if(dp[n][m] != -1)
        {
            return dp[n][m];
        }

        if(word1[n] == word2[m])
        {
            return dp[n][m] =
                1 + distance(word1, word2, n+1, m+1);
        }

        int left = distance(word1, word2, n+1, m);
        int right = distance(word1, word2, n, m+1);

        return dp[n][m] = max(left, right);
    }

    int minDistance(string word1, string word2) 
    {
        memset(dp, -1, sizeof(dp));

        int count = distance(word1, word2, 0, 0);

        int n = word1.size();
        int m = word2.size();

        int val = (n - count) + (m - count);

        return val;
    }
};