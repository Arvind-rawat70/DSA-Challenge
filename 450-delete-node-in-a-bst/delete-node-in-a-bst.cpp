class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key)
    {
        if (root == NULL)
            return root;

        // Handle deleting the root itself
        if (root->val == key)
            return helper(root);

        TreeNode* temp = root;

        while (temp != NULL)
        {
            if (key < temp->val)
            {
                if (temp->left != NULL && temp->left->val == key)
                {
                    temp->left = helper(temp->left);
                    break;
                }
                else
                {
                    temp = temp->left;
                }
            }
            else
            {
                if (temp->right != NULL && temp->right->val == key)
                {
                    temp->right = helper(temp->right);
                    break;
                }
                else
                {
                    temp = temp->right;
                }
            }
        }

        return root;
    }

    TreeNode* helper(TreeNode* root)
    {
        // No left child
        if (root->left == NULL)
            return root->right;

        // No right child
        if (root->right == NULL)
            return root->left;

        // Both children exist
        TreeNode* rightChild = root->right;
        TreeNode* lastRight = findLastRight(root->left);

        lastRight->right = rightChild;

        return root->left;
    }

    TreeNode* findLastRight(TreeNode* root)
    {
        if (root->right == NULL)
            return root;

        return findLastRight(root->right);
    }
};