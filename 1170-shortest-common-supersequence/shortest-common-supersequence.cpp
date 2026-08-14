class Solution {
public: 
    int dp[1001][1001];
    int common(string &str1, string &str2, int i, int m) 
    {
        if(i >= str1.length() || m >= str2.length())
        {
            return 0;
        }

        if(dp[i][m] != -1)
        {
            return dp[i][m];
        }

        if(str1[i] == str2[m])
        {
            return dp[i][m] =
                1 + common(str1, str2, i+1, m+1); 
        }

        int left = common(str1, str2, i+1, m); 
        int right = common(str1, str2, i, m+1);

        return dp[i][m] = max(left, right);
    }
    string matching(string &str1, string &str2, int i, int m)
    {
        if(i >= str1.length())
        {
            return str2.substr(m);
        }

        if(m >= str2.length())
        {
            return str1.substr(i);
        }
        if(str1[i] == str2[m])
        {
            return str1[i] +
                   matching(str1, str2, i+1, m+1);
        }
        if(dp[i+1][m] >= dp[i][m+1])
        {
            return str1[i] +
                   matching(str1, str2, i+1, m);
        }
        else
        {
            return str2[m] +
                   matching(str1, str2, i, m+1);
        }
    }

    string shortestCommonSupersequence(string str1, string str2) 
    {
        memset(dp, -1, sizeof(dp));
        common(str1, str2, 0, 0);
        return matching(str1, str2, 0, 0);
    }
};