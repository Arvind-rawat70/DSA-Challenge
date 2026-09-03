class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) 
    {
        int n = arr.size();
        int high = arr[n-1]+k;
        vector<int>result;
        for(int i = 1; i<=high; i++)
        {
            bool flag = false;
            for(int j = 0; j<n; j++)
            {
                if(arr[j]==i)
                {
                    flag = true;
                    break;
                }
            }
            if(flag == false)
            {
                result.push_back(i);
            }
        }
        return result[k-1];

    }
};