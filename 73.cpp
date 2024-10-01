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
