class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x,
                                         int y, int k) {
        for (int i = x, m = x + k - 1; i < m; i++, m--)
            for (int j = y; j < y + k; j++)
                swap(grid[i][j], grid[m][j]);
        return grid;
    }
};
