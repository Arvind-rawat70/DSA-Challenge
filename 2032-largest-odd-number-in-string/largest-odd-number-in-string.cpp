class Solution {
public:
    string largestOddNumber(string num) 
    {
        int n = num.size();
        int index = -1;
        if(num[n-1]%2!=0)
        {
            return num;
        }
        for(int i = n-1; i>=0; i--)
        {
            if(num[i]%2!=0)
            {
                index = i;
                break;
            }
        }
        string ans;
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