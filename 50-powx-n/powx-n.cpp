class Solution {
public:
    double myPow(double x, int n) 
    {
        long long binary_no =n;
        double ans= 1;
        if(n<0)
        {
            x = 1/x;
            binary_no = -(binary_no);
        }
        while(binary_no>0)
        {
            if(binary_no%2==1)
            {
                ans *=x;
            }
            x *=x;
            binary_no/=2;
        }
        return ans;
    }
};