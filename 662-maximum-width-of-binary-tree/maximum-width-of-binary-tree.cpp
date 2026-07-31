class Solution {
public:
    int widthOfBinaryTree(TreeNode* root)
    {
        if(root == NULL)
            return 0;

        long long count_max = 0;

        queue<pair<TreeNode*, long long>> q;
        q.push({root, 0});

        while(!q.empty())
        {
            int size = q.size();

            long long minIndex = q.front().second;

            long long first = 0, last = 0;

            for(int i = 0; i < size; i++)
            {
                TreeNode* temp = q.front().first;
                long long index = q.front().second - minIndex;

                q.pop();

                if(i == 0)
                    first = index;

                if(i == size - 1)
                    last = index;

                if(temp->left)
                    q.push({temp->left, 2 * index + 1});

                if(temp->right)
                    q.push({temp->right, 2 * index + 2});
            }

            count_max = max(count_max, last - first + 1);
        }

        return (int)count_max;
    }
};