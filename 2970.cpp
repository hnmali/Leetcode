class Solution {
public:
    int incremovableSubarrayCount(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                bool flag = true;
                for (int l = 1; l < i; l++) {
                    if (nums[l] <= nums[l - 1]) {
                        flag = false;
                        break;
                    }
                }
                for (int k = j + 2; k < n; k++) {
                    if (nums[k] <= nums[k - 1]) {
                        flag = false;
                        break;
                    }
                }
                if (i > 0 && j + 1 < n && nums[j + 1] <= nums[i - 1]) 
                    flag = false;
                if (flag) 
                    ans++;
            }
        }
        return ans;
    }
};
