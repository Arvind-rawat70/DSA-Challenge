class Solution {
public:
    int longestPalindrome(string s) 
    {
        unordered_map<char,int>map;
        int ans = 0;
        for(char ch :s)
        {
            map[ch]++;
        }
        bool odd = false;
        for(auto it: map)
        {
            if(it.second%2==0)
            {
                ans += it.second;
            }
            else{
                ans+=it.second-1;
                odd = true;
            }
        }
        if(odd)
        {
            ans++;
        }
        return ans;
    }
};