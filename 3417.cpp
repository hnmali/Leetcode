class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        vector<int> ans;
        bool flag = true;
        for(int i = 0; i < grid.size(); i++) {
            if(i&1) {
                for(int j = grid[i].size()-1; j >= 0; j--) {
                    flag = !flag;
                    if(flag) continue;
                    ans.push_back(grid[i][j]);
                }
            }
            else {
                for(int j = 0; j < grid[i].size(); j++) {
                    flag = !flag;
                    if(flag) continue;
                    ans.push_back(grid[i][j]);
                }
            }
        }
        return ans;
    }
};
