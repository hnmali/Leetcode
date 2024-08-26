class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            long long cnt0 = 0;
            while (i < nums.size() and nums[i] == 0) {
                i++;
                cnt0++;
            }
            ans += cnt0*(cnt0+1)/2;
        }
        return ans;
    }
};
