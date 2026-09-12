class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        int count = -1;
        int n = needle.size()-1;
        int m = haystack.size()-1;
        int index = 0;
        int i = 0;
        int j = 0;
        while(j<=m)
        {
            if(needle[i]==haystack[j])
            {
                count++;
                if(count==n)
                {
                    return j-n;
                }
                i++;
                j++;
            }
            else{
                count= -1;
                i = 0;
                index++;
                j  = index;
            }
        }

        return -1;
    }
};