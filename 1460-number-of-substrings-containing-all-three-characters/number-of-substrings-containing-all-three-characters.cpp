class Solution {
public:
    int numberOfSubstrings(string s) 
    {
        if(s.size()<3)
        {
            return 0;
        }
        int l = 0;
        int r = 0;
        int n = s.length();
        int count = 0;
        vector<int>hash(3,0);
        while(r<n)
        {
            char ch = s[r];
            hash[ch -'a']++;
            while(hash[0]>0 && hash[1]>0 && hash[2]>0)
            {
                count+= (n-r);
                hash[s[l]-'a']--;
                l++;
            }
            r++;
        }
        return count;
    }
};