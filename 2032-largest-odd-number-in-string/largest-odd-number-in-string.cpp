class Solution {
public:
    string largestOddNumber(string num) 
    {
        string ans;
        int n = num.size();
        if(num[n-1]%2!=0)
        {
            ans = num;
            return ans;
        }
        int index = 0;
        for(int i = n-1; i>=0; i--)
        {
            if(num[i]%2!=0)
            {
                index = i;
                break;
            }
        }
        if(index>=0)
        {
            if(num[index]%2!=0)
            {
             for(int i = 0;i<=index;i++)
             {
                ans+=num[i];
             }
            }
        }
        return ans;
    }
};