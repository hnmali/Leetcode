class Solution {
public:
    static bool comparator(int a, int b) {
        return a > b; // Sort in decreasing order
    }

    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long ans = 0;
        sort(happiness.begin(), happiness.end(), comparator);
        for (int i = 0; i < k; i++) {
            if ((happiness[i] - i) > 0)
                ans += happiness[i] - i;
        }
        return ans;
    }
};

