class Solution {
public:
    vector<int> findAnagrams(string s, string p) 
    {
        unordered_map<char,int>map1;
        unordered_map<char,int>map2;
        vector<int>result;
        for(int i = 0; i<p.length(); i++)
        {
            map1[p[i]]++;
        }
        int count = p.length();
        for(int i = 0; i<s.length(); i++)
        {
            map2[s[i]]++;
            if(i>=count)
            {
                map2[s[i-count]]--;
                if(map2[s[i-count]]==0)
                {
                    map2.erase(s[i-count]);
                }
            }
            if(i>=count-1 && map1==map2)
            {
                result.push_back(i-count+1);
            }
        }
        return result;
    }
};