class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int sum = 0;
        for(int i = 0; i < grid.size(); i++) 
            sort(grid[i].begin(),grid[i].end());
        for(int j = 0; j < grid[0].size(); j++) {
            int maxm = grid[0][j];
            for(int i = 1; i < grid.size(); i++) 
                maxm = max(grid[i][j],maxm);
            sum += maxm;
        }   
        return sum;
    }
};
