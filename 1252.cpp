class Solution {
public:
    void update(int m, int n, vector<vector<int>>& arr) {
        // arr[m][n]++;
        for (int i = 0; i < arr.size(); i++) 
            arr[i][n]++;
        for (int i = 0; i < arr[0].size(); i++)
            arr[m][i]++;
        return;
    }

    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int ans = 0;
        vector<vector<int>> arr(m,vector<int>(n));
        for (int i = 0; i < indices.size(); i++) {
            update(indices[i][0], indices[i][1], arr);
        }
        for (int i = 0; i < arr.size(); i++) {
            for (int j = 0; j < arr[i].size(); j++) {
                if (arr[i][j] & 1)
                    ans++;
            }
        }
        return ans;
    }
};
