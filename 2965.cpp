class Solution {
public:
    bool repeatCheck(int a, vector<vector<int>>& grid) {
        int count = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (a == grid[i][j])
                    count++;
            }
        }
        if (count == 2)
            return true;
        return false;
    }
    bool missCheck(int a, vector<vector<int>>& grid) {
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (a == grid[i][j])
                    return false;
            }
        }
        return true;
    }
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int repeating, missing;
        for (int i = 1; i <= grid.size() * grid.size(); i++) {
            if (repeatCheck(i, grid))
                repeating = i;
            if (missCheck(i, grid))
                missing = i;
        }
        return {repeating, missing};
    }
};
