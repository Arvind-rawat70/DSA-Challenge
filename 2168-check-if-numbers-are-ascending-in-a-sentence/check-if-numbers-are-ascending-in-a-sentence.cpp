class Solution {
public:
    bool areNumbersAscending(string s) 
    {
        vector<int> result;

        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] >= '0' && s[i] <= '9')
            {
                int num = 0;

                while(i < s.length() && s[i] >= '0' && s[i] <= '9')
                {
                    num = num * 10 + (s[i] - '0');
                    i++;
                }

                result.push_back(num);
            }
        }

        for(int i = 0; i < result.size() - 1; i++)
        {
            if(result[i] >= result[i+1])
            {
                return false;
            }
        }

        return true;
    }
};