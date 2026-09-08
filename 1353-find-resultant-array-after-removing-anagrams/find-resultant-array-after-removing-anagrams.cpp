class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) 
    {
        vector<string> result;

        result.push_back(words[0]);

        for(int i = 1; i < words.size(); i++)
        {
            unordered_map<char,int> map1;
            unordered_map<char,int> map2;

            for(char ch : result.back())
                map1[ch]++;

            for(char ch : words[i])
                map2[ch]++;

            if(map1 != map2)
            {
                result.push_back(words[i]);
            }
        }

        return result;
    }
};