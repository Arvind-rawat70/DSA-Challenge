class Solution {
public:
    string sortVowels(string s) 
    {
        map<char, int> mp;
        string vowels = "aeiouAEIOU";

        for(int i = 0; i < s.length(); i++)
        {
            if(vowels.find(s[i]) != string::npos)
            {
                mp[s[i]]++;
            }
        }
        auto it = mp.begin();
        for(int i = 0; i<s.length(); i++)
        {
            if(vowels.find(s[i])!=string::npos)
            {
                s[i] = it->first;
                mp[it->first]--;
                if(mp[it->first]==0)
                {
                    it++;
                }
            }
        }
        return s;
    }
};