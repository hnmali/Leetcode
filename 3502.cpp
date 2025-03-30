class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        vector<int> ans(cost.size());
        ans[0] = cost[0];
        int minm = cost[0];
        for(int i = 1; i < cost.size(); i++) {
            if(cost[i] < minm) 
                minm = cost[i];
            ans[i] = minm;
        }
        return ans;
    }
};
