class Solution {
public:
    int maxVowels(string s, int k) 
    {
        unordered_map<char,int>hash;
        hash['a'] = 1;
        hash['e'] = 1;
        hash['i'] = 1;
        hash['o'] = 1;
        hash['u'] = 1;
        int n = s.length();
        int count = 0;
       for(int i = 0; i<k; i++)
       {
        if(hash[s[i]])
        {
            count++;
        }
       }
       int max_count = count;
       for(int i = k; i<n; i++)
       {
        if(hash[s[i-k]])
        {
            count--;
        }
        if(hash[s[i]])
        {
            count++;
        }
        max_count = max(max_count, count);
       }
      return max_count;
    }
};