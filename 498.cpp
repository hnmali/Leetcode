class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int N = mat.size(), M = mat[0].size();
        int row = 0, col = 0, dir = 1; 
        vector<int> res;
        while (row < N && col < M) {
            res.push_back(mat[row][col]);
            int nRow = row + (dir == 1 ? -1 : 1);
            int nCol = col + (dir == 1 ? 1 : -1);
            if (nRow < 0 || nRow == N || nCol < 0 || nCol == M) {
                if (dir) {
                    if (col == M - 1)
                        row++;
                    else
                        col++;
                } else {
                    if (row == N - 1)
                        col++;
                    else
                        row++;
                }
                dir = 1 - dir;
            } else {
                row = nRow;
                col = nCol;
            }
        }
        return res;
    }
};
