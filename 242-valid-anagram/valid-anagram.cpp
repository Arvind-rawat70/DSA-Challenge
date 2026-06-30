class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        unordered_map<char,int>map;
        for(char ch:s)
        {
            map[ch]++;
        }
        for(char ch :t)
        {
            map[ch]--;
        }
        for( auto it:map)
        {
            if(it.second!=0)
            {
                return false;
            }
        }
        return true;
    }
};