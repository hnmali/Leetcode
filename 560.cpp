class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixSumCount;
        prefixSumCount[0] = 1;
        int prefixSum = 0, count = 0;
        for (int i = 0; i < nums.size(); i++) {
            prefixSum += nums[i];
            if (prefixSumCount.find(prefixSum - k) != prefixSumCount.end())
                count += prefixSumCount[prefixSum - k];
            prefixSumCount[prefixSum]++;
        }
        return count;
    }
};
