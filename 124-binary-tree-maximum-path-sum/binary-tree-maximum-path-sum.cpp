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
   int sum ;
   int find(TreeNode *root)
   {
    if(root==NULL)
    {
        return 0;
    }
    int lh = find(root->left);
    int rh = find(root->right);
    int nechee_acha_mil_gya = lh+rh+root->val;
    int koi_ek_acha = max(lh,rh)+root->val;
    int root_acha_ha = root->val;
    sum = max({sum,nechee_acha_mil_gya,koi_ek_acha, root_acha_ha});
    return max(koi_ek_acha, root_acha_ha);
   }

    int maxPathSum(TreeNode* root) 
    {
        sum = INT_MIN;
        find(root);
        return sum;
    }
};