class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> totalMin(timePoints.size());
        for(int i = 0; i < timePoints.size(); i++) {
            int hrs = (timePoints[i][0] - '0') * 10 + (timePoints[i][1] - '0');
            int min = (timePoints[i][3] - '0') * 10 + (timePoints[i][4] - '0');
            totalMin[i] = hrs * 60 + min;
        }
        sort(totalMin.begin(), totalMin.end());
        int ans = INT_MAX;
        for(int i = 1; i < totalMin.size(); i++) 
            ans = min(ans, totalMin[i] - totalMin[i - 1]);
        ans = min(ans, 24 * 60 - totalMin.back() + totalMin.front());
        return ans;
    }
};
