class Solution {
public:
    int numberOfArrays(vector<int>& diff, int lower, int upper) {
        long long minm = lower, maxm = lower, prev = lower;
        for(int i = 0; i < diff.size(); i++) {
            long long curr = prev + diff[i];
            minm = min(curr, minm);
            maxm = max(curr, maxm);
            prev = curr;
        }
        int ans = (upper - lower + 1) - (maxm - minm);
        if(ans > 0)
            return ans;
        return 0;
    }
};
