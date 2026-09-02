class Solution {
public:

    int daysRequired(vector<int>& weights, int capacity)
    {
        int days = 1;
        int sum = 0;

        for(int i = 0; i < weights.size(); i++)
        {
            if(sum + weights[i] <= capacity)
            {
                sum += weights[i];
            }
            else
            {
                days++;
                sum = weights[i];
            }
        }

        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) 
    {
        int low = *max_element(weights.begin(), weights.end());

        int high = 0;
        for(int i = 0; i < weights.size(); i++)
        {
            high += weights[i];
        }
        int ans = -1;

        // Try every possible capacity
        while(low<=high)
        {
            int mid = low+(high-low)/2;
            int requiredDays = daysRequired(weights, mid);

            if(requiredDays <= days)
            {
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }

        return ans;
    }
};