class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //transpose of matrix
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = i; j < matrix[i].size(); j++) 
                swap(matrix[i][j], matrix[j][i]);
        }

        //reversing each row
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0, k = matrix[i].size() - 1; j < k; j++, k--)
                swap(matrix[i][j], matrix[i][k]);
        }

        return;
    }
};
