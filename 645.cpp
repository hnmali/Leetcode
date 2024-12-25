class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> cnt(n + 1, 0);
        int miss = 0, d = 0;
        for (int i = 0; i < n; i++)
            cnt[nums[i]]++;
        for (int i = 1; i < cnt.size(); i++) {
            if (cnt[i] == 2)
                d = i;
            if (cnt[i] == 0)
                miss = i;
        }
        return {d, miss};
    }
};
