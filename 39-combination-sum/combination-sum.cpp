class Solution {
public:
    void combination(int ind,
                        int target,
                        vector<int>& candidates,
                        vector<vector<int>>& result,
                        vector<int>& ans)
    {
       int n = candidates.size();
       if(ind == n)
       {
        if(target == 0)
        {
            result.push_back(ans);
        }
        return;
       }
       if(candidates[ind]<=target)
       {
        ans.push_back(candidates[ind]);
        combination(ind,target-candidates[ind],candidates,result,ans);
        ans.pop_back();
       }
       combination(ind+1,target,candidates,result,ans);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target)
    {
        vector<vector<int>> result;
        vector<int> ans;

        combination(0, target, candidates, result, ans);

        return result;
    }
};