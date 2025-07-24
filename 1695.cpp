class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> st = {nums[0]};
        int sum = nums[0], maxSum = nums[0], j = 0;
        for(int i = 1; i < nums.size(); i++) {
            sum += nums[i];
            while((st.find(nums[i]) != st.end()) && !st.empty()) {
                sum -= nums[j];
                st.erase(nums[j]);
                j++;
            }
            st.insert(nums[i]);
            maxSum = max(sum, maxSum);
        }
        return maxSum;
    }
};
