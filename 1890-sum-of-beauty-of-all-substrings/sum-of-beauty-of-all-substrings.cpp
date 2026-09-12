class Solution {
public:
    int beautySum(string s) 
    {
        int sum = 0;
        for(int i = 0; i<s.length(); i++)
        {
            int freq[26] = {0};
            for(int j = i; j<s.length(); j++)
            {
                freq[s[j]-'a']++;
                int mx = 0;
                int mn = INT_MAX;
                for(int k =0; k<26; k++)
                {
                    if(freq[k]>0)
                    {
                        mx = max(freq[k],mx);
                        mn = min(freq[k],mn);
                    }
                }
                sum +=(mx-mn);
            }
        }
        return sum;
    }
};