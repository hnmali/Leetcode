class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size(), minm = 0, maxm = 0;
        for (int i = 1; i < n; i++) 
            if (nums[i] < nums[minm])
                minm = i;
            else if (nums[i] > nums[maxm])
                maxm = i;
        int l = min(minm, maxm);
        int r = max(minm, maxm);
        int left = r + 1;
        int right = n - l;
        int both = (l + 1) + (n - r);
        return min({left, right, both});
    }
};
