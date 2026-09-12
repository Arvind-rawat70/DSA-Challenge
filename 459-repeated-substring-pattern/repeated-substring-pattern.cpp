class Solution {
public:
    bool repeatedSubstringPattern(string s) 
    {
        int n = s.length();

        for(int i = 1; i <= n/2; i++)
        {
            if(n % i != 0)
            {
                continue;
            }

            string pattern = s.substr(0, i);
            string strnew = "";

            int time = n / i;

            while(time--)
            {
                strnew += pattern;
            }

            if(s == strnew)
            {
                return true;
            }
        }

        return false;
    }
};