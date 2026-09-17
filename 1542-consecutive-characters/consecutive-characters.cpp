class Solution {
public:
    int maxPower(string s) 
    {
        int count = 1;
        int max_count = 0;
        int i = 0;
        int j = 1;
        if(s.length()==1)
        {
            return 1;
        }
        while(j<s.length())
        {
            if(s[i]==s[j])
            {
                count++;
            }
            else{
                count = 1;
                i = j;
            }
            max_count = max(count,max_count);
            j++;
        }
        return max_count;
        
    }
};