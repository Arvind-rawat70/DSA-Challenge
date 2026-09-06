class Solution {
public:
    string removeOuterParentheses(string s) 
    {
        string ans ;
        int n = s.length();
        int count = 0;
        for(int i = 0; i<n; i++)
        {
            if(s[i]=='(')
            {
                if(count>0)
                {
                    ans+=s[i];
                }
                count++;
            }
            else{
                count--;
                if(count>0)
                {
                    ans+=s[i];
                }
            }
        }
        return ans;
        
    }
};