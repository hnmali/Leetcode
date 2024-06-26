class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i]%3 == 0)
                continue;
            if ((nums[i]+1)%3 == 0 || (nums[i]+2)%3 == 0)
                ans++;
            else
                ans += 2;
        }
        return ans;
    }
};
