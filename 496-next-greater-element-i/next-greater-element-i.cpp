class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
     stack<int>st;
     unordered_map<int,int>map;
     int n = nums1.size();
     vector<int>nse(n);
     for(int i = nums2.size()-1; i>=0; i--)
     {
        while(!st.empty() && nums2[i]>=st.top())
        {
            st.pop();
        }
        if(st.empty())
        {
            map[nums2[i]] = -1;
        }else{
            map[nums2[i]] = st.top();
        }
        st.push(nums2[i]);
     }
     for(int i = 0; i<nums1.size();i++)
     {
        nse[i] = map[nums1[i]];
     }
     return nse;
    }
};
