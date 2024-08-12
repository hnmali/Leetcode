class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        vector<int> oddIndices;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 1) 
                oddIndices.push_back(i);
        }
        int count = 0;
        if (oddIndices.size() < k) 
            return 0;
        for (int i = 0; i <= oddIndices.size() - k; i++) {
            int start = oddIndices[i], end = oddIndices[i + k - 1];
            int leftChoices = (i == 0) ? start + 1 : start - oddIndices[i - 1];
            int rightChoices = (i + k == oddIndices.size()) ? n - end : oddIndices[i + k] - end;
            count += leftChoices * rightChoices;
        }
        return count;
    }
};
