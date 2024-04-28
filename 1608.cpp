class Solution {
public:
    int count(vector<int>& nums, int x) {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= x)
                ans++;
        }
        return ans;
    }
    int specialArray(vector<int>& nums) {
        int s = 0, e = nums.size();
        while (s <= e) {
            int mid = (s+e) >> 1;
            if (count(nums, mid) == mid)
                return mid;
            else if (count(nums, mid) > mid)
                s = mid + 1;
            else
                e = mid - 1;
        }
        return -1;
    }
};
