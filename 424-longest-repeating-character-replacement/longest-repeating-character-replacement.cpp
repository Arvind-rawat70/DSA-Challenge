class Solution {
public:
    int characterReplacement(string s, int k) 
    {
      int l = 0;
      int r = 0;
      int max_len = 0;
      int max_f = 0;
      vector<int>hash(26,0);
      while(r<s.length())
      {
        hash[s[r]-'A']++;
        max_f = max(max_f,hash[s[r]-'A']);
        while((r-l+1)-max_f>k)
        {
            hash[s[l]-'A']--;
            l++;
            max_f = 0;
            for(int i =0; i<26; i++)
            {
                max_f = max(max_f,hash[i]);
            }
        }
        max_len = max(max_len, r-l+1);
        r++;
      }
      return max_len;
    }
};