class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int>result;
        int l = nums1.size();
        int m = nums2.size();
        int i = 0;
        int j =0;
        while(l>0 || m>0)
        {
            if(l>0)
            {
                result.push_back(nums1[i]);
                i++;
                l--;
            }
            if(m>0)
            {
                result.push_back(nums2[j]);
                j++;
                m--;
            }
        }
        sort(result.begin(), result.end());
        int n = result.size();
        double ans = 0;
        if(n%2!=0)
        {
            ans = result[n/2];
        }
        else{
            ans = (result[n/2]+result[n/2-1])/2.0;
        }
        return ans;
    }
};