class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int total = 0, n = nums.size();
        for (int i = 0; i < n; i++) 
            if (nums[i])
                total++;
        for (int i = 0; i < n; i++)
            nums.push_back(nums[i]); 
        int ans = n, currSwap = 0;
        for (int i = 0; i < total; i++)
            if (!nums[i])
                currSwap++;
        ans = currSwap;
        for (int i = total; i < total + n; i++) {
            if (!nums[i]) 
                currSwap++;
            if (!nums[i - total]) 
                currSwap--;
            ans = min(currSwap, ans);
        }
        return ans;
    }
};
