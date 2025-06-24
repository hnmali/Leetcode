class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n = nums.size(), lastEnd = -1;
        vector<pair<int, int>> ranges;
        vector<int> result;
        for (int i = 0; i < n; i++) {
            if (nums[i] == key) {
                int start = max(0, i - k);
                int end = min(n - 1, i + k);
                if (!ranges.empty() && start <= lastEnd) {
                    ranges[ranges.size() - 1].second =
                        max(ranges.back().second, end);
                    lastEnd = ranges.back().second;
                } 
                else {
                    ranges.push_back(make_pair(start, end));
                    lastEnd = end;
                }
            }
        }
        for (int i = 0; i < ranges.size(); i++) {
            int start = ranges[i].first, end = ranges[i].second;
            for (int j = start; j <= end; j++) 
                result.push_back(j);
        }
        return result;
    }
};
