class Solution {
public:
    int minElement(vector<int>& nums) {
        int ans = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;
            while (nums[i]) {
                int rem = nums[i]%10;
                sum += rem;
                nums[i] /= 10;
            }
            nums[i] = sum;
            ans = min(nums[i],ans);
        }
        return ans;
    }
};
