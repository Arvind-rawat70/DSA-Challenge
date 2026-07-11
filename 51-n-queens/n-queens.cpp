class Solution {
public:
    vector<vector<string>> ans;
    vector<int> x;

    bool valid(int row, int col)
    {
        for (int i = 0; i < row; i++)
        {
            if (x[i] == col || abs(i - row) == abs(x[i] - col))
                return false;
        }
        return true;
    }

    void solve(int row, int n)
    {
        if (row == n)
        {
            vector<string> board(n, string(n, '.'));

            for (int i = 0; i < n; i++)
                board[i][x[i]] = 'Q';

            ans.push_back(board);
            return;
        }

        for (int col = 0; col < n; col++)
        {
            if (valid(row, col))
            {
                x[row] = col;
                solve(row + 1, n);
            }
        }
    }

    vector<vector<string>> solveNQueens(int n)
    {
        x.resize(n);
        solve(0, n);
        return ans;
    }
};