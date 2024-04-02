class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size(), col = matrix[0].size();
        int startRow = 0, startCol = col - 1;
        while (startRow < row && startCol >= 0) {
            int element = matrix[startRow][startCol];
            if (element == target)
                return true;
            else if (element > target)
                startCol--;
            else
                startRow++;
        }
        return false;
    }
};
