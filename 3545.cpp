class Solution {
public:
    int minDeletion(string s, int k) {
        vector<int> cnt(26, 0);
        for (char ch : s)
            cnt[ch - 'a']++;

        sort(cnt.begin(), cnt.end());  // Ascending: zeroes first, then non-zero counts

        int sum = 0, removed = 0;

        // Count number of distinct characters directly while iterating
        int distinct = count_if(cnt.begin(), cnt.end(), [](int x) { return x > 0; });

        if (distinct <= k)
            return 0;

        // Need to delete (distinct - k) least frequent non-zero characters
        for (int i = 0; removed < (distinct - k) && i < 26; i++) {
            if (cnt[i] > 0) {
                sum += cnt[i];
                removed++;
            }
        }

        return sum;
    }
};
