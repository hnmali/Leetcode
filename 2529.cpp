class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int countPos = 0, countNeg = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0)
                countNeg++;
            if (nums[i] > 0)
                countPos++;
        }
        return max(countPos, countNeg);
    }
};
