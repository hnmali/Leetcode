class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        if (nums.size() == 1) {
            if (nums[0] < k)
                return -1;
            if(nums[0] == k)
                return 0;
            else
                return 1;
        }
        int cnt = 0, i;
        sort(nums.begin(), nums.end());
        if(nums[0] < k) return -1;
        if(nums[0] > k)
            cnt++;
        for (i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1])
                continue;
            if (nums[i] < k)
                return -1;
            else if(nums[i] > k)
                cnt++;
        }
        return cnt;
    }
};
