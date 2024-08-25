class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<int,int>> dis(points.size());
        for (int i = 0; i < points.size(); i++) {
            int dist_squared = points[i][0] * points[i][0] + points[i][1] * points[i][1];
            dis[i] = {dist_squared, i};
        }
        sort(dis.begin(), dis.end());
        vector<vector<int>> ans;
        for (int i = 0; i < k; i++) 
            ans.push_back({points[dis[i].second][0], points[dis[i].second][1]});
        return ans;
    }
};
