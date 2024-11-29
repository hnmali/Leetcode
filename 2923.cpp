class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int ans = 0, maxCnt = 0;
        for (int i = 0; i < grid.size(); i++) {
            int cnt = 0;
            for (int j = 0; j < grid[i].size(); j++) {
                if(i == j)
                    continue;
                if(grid[i][j] == 1)
                    cnt++;
            }
            if(cnt > maxCnt) {
                ans = i;
                maxCnt = cnt;
            }
        }
        return ans;
    }
};
