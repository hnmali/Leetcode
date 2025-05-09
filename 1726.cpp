class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int, int> mp;
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
            for (int j = i + 1; j < nums.size(); j++) {
                int prdct = nums[i] * nums[j];
                ans += 8 * mp[prdct];
                mp[prdct]++;
            }
        return ans;
    }
};
