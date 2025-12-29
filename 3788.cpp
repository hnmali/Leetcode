class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        int n = nums.size();
        vector<long long> sufMin(n);
        sufMin[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) 
            sufMin[i] = min((long long)nums[i], sufMin[i + 1]);
        long long preSum = 0, score = LLONG_MIN;
        for (int i = 0; i < n - 1; i++) {   
            preSum += nums[i];
            score = max(score, preSum - sufMin[i + 1]); 
        }
        return score;
    }
};
