/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) 
    {
       int re = 0;
       vector<int>result;
       if(root==NULL)
       {
        return re;
       }
       queue<TreeNode* >q;
       q.push(root);
       while(!q.empty())
       {
        int size  = q.size();
        vector<int>level;
        for(int i = 0; i<size; i++)
        {
            TreeNode *temp = q.front();
            q.pop();
            level.push_back(temp->val);
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
        for(int x:level)
        {
            result.push_back(x);
        }
       }
       sort(result.begin(), result.end());
       for(int i = 0; i<result.size(); i++)
       {
         if(i==k-1)
         {
            re = result[i];
         }
       }
       return re;
    }
};