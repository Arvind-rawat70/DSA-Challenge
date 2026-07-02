class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>map;
        for(int i = 0; i<s.size(); i++)
        {
            map[s[i]]++;
        }
        vector<pair<int,char>>freq;
        for(auto it:map)
        {
            freq.push_back({it.second,it.first});
        }
        sort(freq.begin(),freq.end(),greater<>());
        string ans;
        for(auto p :freq)
        {
            ans.append(p.first,p.second);
        }
        return ans;
    }
};