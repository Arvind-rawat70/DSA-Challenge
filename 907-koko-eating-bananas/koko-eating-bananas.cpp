class Solution {
public:

    long long funct(vector<int>piles, int h)
    {
        long long total_time = 0;
        for(int i = 0; i<piles.size(); i++)
        {
            total_time += (piles[i] + h - 1) / h;
        }
        return total_time;
    }
    
    int minEatingSpeed(vector<int>& piles, int hrs) 
    {
        int h = *max_element(piles.begin(), piles.end());
        int l = 1;
        while(l<=h)
        {
            int mid = l+(h-l)/2;
            if(funct(piles,mid)<=hrs)
            {
                h = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return l;
    }
};