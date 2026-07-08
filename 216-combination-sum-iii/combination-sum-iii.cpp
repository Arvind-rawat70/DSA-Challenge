class Solution {
public:
    void combination(int ind ,int k , int n , vector<vector<int>> &result, vector<int> &ans)
    {
        if(ans.size()==k)
        {
            if(n==0)
            {
                result.push_back(ans);
            }
            return;
        }
        for(int i = ind ; i<=9; i++)
        {
            if(i>n) break;
           
                ans.push_back(i);
                combination(i+1,k,n-i,result,ans);
                ans.pop_back();
            
        }

    }

    vector<vector<int>> combinationSum3(int k, int n) 
    {
        vector<vector<int>>result;
        vector<int>ans;
        combination(1,k,n,result,ans);
        return result;
    }
};