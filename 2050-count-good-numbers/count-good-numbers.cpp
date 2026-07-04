class Solution {
public:
    long long MOD = 1000000007;

    long long find_power(long long a, long long b)
    {
        if(b == 0)
            return 1;

        long long half = find_power(a, b/2);

        long long result = (half * half) % MOD;

        if(b % 2 == 1)
        {
            result = (result * a) % MOD;
        }

        return result;
    }

    int countGoodNumbers(long long n)
    {
        long long evenPos = (n + 1) / 2;
        long long oddPos = n / 2;

        long long evenWays = find_power(5, evenPos);
        long long oddWays = find_power(4, oddPos);

        return (evenWays * oddWays) % MOD;
    }
};