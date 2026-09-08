class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        int n = s.length();
        int m = t.length();
        if(n!=m)
        {
            return false;
        }
        unordered_map<char,int>map1;
        unordered_map<char,int>map2;
        for(int i = 0; i<n; i++)
        {
            map1[s[i]]++;
            map2[t[i]]++;
        }
        for(int i = 0; i<n; i++)
        {
            int element = s[i];
            if(map1[element]!=map2[element])
            {
                return false;
            }
        }
        return true;
        
    }
};