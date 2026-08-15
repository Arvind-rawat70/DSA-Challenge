class Solution {
public:
    int dp[501][501];

    int distance(string &word1, string &word2, int i, int j)
    {
        if(i >= word1.length())
        {
            return word2.length() - j;
        }
        if(j >= word2.length())
        {
            return word1.length() - i;
        }

        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }
        if(word1[i] == word2[j])
        {
            return dp[i][j] =
                distance(word1, word2, i+1, j+1);
        }

        // Delete
        int del = 1 + distance(word1, word2, i+1, j);

        // Insert
        int insert = 1 + distance(word1, word2, i, j+1);

        // Replace
        int repl = 1 + distance(word1, word2, i+1, j+1);

        return dp[i][j] = min({del, insert, repl});
    }

    int minDistance(string word1, string word2)
    {
        memset(dp, -1, sizeof(dp));

        return distance(word1, word2, 0, 0);
    }
};