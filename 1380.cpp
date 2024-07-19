class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<int> ans,rowMin(m,100001),colMax(n,0);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++)
                rowMin[i] = min(rowMin[i],matrix[i][j]);
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                colMax[i] = max(colMax[i],matrix[j][i]);
        }
         for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == rowMin[i] && matrix[i][j] == colMax[j])
                    ans.push_back(matrix[i][j]);
            }
        }
        return ans;
    }
};
