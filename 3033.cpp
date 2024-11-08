class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        vector<int> maxCol;
        for(int i = 0; i < matrix[0].size(); i++) {
            int temp = 0;
            for(int j = 0; j < matrix.size(); j++) 
                temp = max(matrix[j][i],temp);
            maxCol.push_back(temp);
        }
        for(int i = 0; i < matrix.size(); i++) {
            for(int j = 0; j < matrix[0].size(); j++) {
                if(matrix[i][j] == -1)
                    matrix[i][j] = maxCol[j];
            }
        }
        return matrix;
    }
};
