class Solution {
public:
    string reverseWords(string s) 
    {
        stringstream ss(s);
        vector<string> result;
        string t;
        while(ss>>t)
        {
            result.push_back(t);
        }
        int n = result.size();
        string ans;
        for(int i = n-1; i>=0; i--)
        {
            ans+= result[i];
            if(i!=0)
            {
                ans+= " ";
            }
        }
        return ans;
    }
};