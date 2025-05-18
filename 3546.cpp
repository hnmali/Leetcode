class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        long long totalSum = 0;
        for(long long i = 0; i < grid.size(); i++) 
            for(long long j = 0; j < grid[i].size(); j++)
                totalSum += grid[i][j];
        long long sufSum = totalSum, preSum = 0;
        for(long long i = 0; i < grid.size(); i++) {
            long long j = 0;
            while(j < grid[i].size()) {
                preSum += grid[i][j];
                sufSum -= grid[i][j];
                j++;
            }
            if(preSum == sufSum)
                return true;
        }
        sufSum = totalSum; 
        preSum = 0;
        for(long long i = 0; i < grid[0].size(); i++) {
            long long j = 0;
            while(j < grid.size()) {
                preSum += grid[j][i];
                sufSum -= grid[j][i];
                j++;
            }
            if(preSum == sufSum)
                return true;
        }
        return false;
    }
};
