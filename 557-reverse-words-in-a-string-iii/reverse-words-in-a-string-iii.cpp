class Solution {
public:
    string reverseWords(string s) 
    {
        int n = s.length();
        string ans;
        for(int i = n-1; i>=0; i--)
        {
            ans+=s[i];
        }
        stringstream ss(ans);
        string t;
        vector<string>result;
        while(ss>> t)
        {
            result.push_back(t);
        }
        string re;
        int m = result.size()-1;
        for(int i = m; i>=0; i--)
        {
            re+=result[i];
            if(i!=0)
            {
                re+=" ";
            }
            
        }
        return re;
    }
};