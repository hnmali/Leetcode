class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end());
        int ans = 0;
        bool flag = false;
        for (int i = cost.size()-1; i >= 0; i -= 3) {
            if (i-1 < 0) {
                flag = true;
                break;
            }
            ans += cost[i] + cost[i-1];
        }
        if (flag) {
            ans += cost[0];
        } 
        return ans;
    }
};
