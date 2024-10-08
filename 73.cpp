class Solution {
public:
    void update(vector<vector<int>>& matrix, int r, int c) {
        for (int i = 0; i < matrix.size(); i++)
            matrix[i][c] = 0;
        for (int i = 0; i < matrix[0].size(); i++)
            matrix[r][i] = 0;
        return;
    }
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> index;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) 
                if(matrix[i][j] == 0)
                    index.push_back({i,j});
        }
        for (int i = 0; i < index.size(); i++) 
            update(matrix, index[i].first, index[i].second);
    }
};

//Optimized solution
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool flag = false;
        for (int i = 0; i < matrix.size(); i++) {
            if (matrix[i][0] == 0)
                flag = true;
        }
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    if(j == 0)
                        continue;
                    matrix[0][j] = 0;
                }
            }
        }
        if (matrix.size() > 1) {
            for (int i = 1; i < matrix.size(); i++) {
                for (int j = 1; j < matrix[0].size(); j++) {
                    if (matrix[i][0] == 0 or matrix[0][j] == 0)
                        matrix[i][j] = 0;
                }
            }
        }
        if (matrix[0][0] == 0) {
            for (int i = 0; i < matrix[0].size(); i++) 
                matrix[0][i] = 0;
        }
        if (flag) {
            for (int i = 0; i < matrix.size(); i++) 
                matrix[i][0] = 0;
        }
    }
};
