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
   int re = 0;
   int co = 0;

   void countt(TreeNode*root, int k)
   {
    if(root==NULL)
    {
        return ;
    }
    countt(root->left,k);
    co++;
    if(co==k)
    {
        re = root->val;
        return;
    }
    countt(root->right,k);
   }

    int kthSmallest(TreeNode* root, int k) 
    {
       countt(root,k);
       return re;
    }
};